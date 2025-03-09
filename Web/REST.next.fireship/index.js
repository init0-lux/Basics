// gotta use a middleware to make sure express uses JSON

const express = require('express');
const app = express();

const PORT = 8080;

app.use(express.json());

// or just
// const app = require('express')().use(express.json());

app.listen(
	PORT,
	() => console.log(`It's alive on http://localhost:${PORT}`)
)

// add endpoint
// get provides two objects -> request and response
app.get("/api", ( req, res ) => {
	res.status(200).send({
		tshirt : "tee",
		size: "L"
	})
});

// adding post endpoint with a dyanmic url param
// post means that the user is trying to create new data on the server
app.post("/api/:id", ( req, res ) => {
	const { id } = req.params;
	const { size } = req.body;

	if (!size){
		res.status(418).send({message: "we need a size"});
	}

	res.send({
		tshirt: `This is the tshirt with the size ${size} and id ${id}`,
	})
});
