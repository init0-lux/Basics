// Old-Fashioned Notion -> Wiki -> Code -> Algorithms -> Graph Algorithms

const depthFirstPrint = (graph, head) => {
	const stack = [ head ]; // array is just a stack
	while(stack.length){
		const curr = stack.pop();
		console.log(curr);
		// JS uses 'for of' loop
		for(let neighbour of graph[curr]){
			stack.push(neighbour);
		}
	}
};

const depthFirstPrint_rec = (graph, head) => {
	console.log(head);
	for(let neighbour of graph[head]){
		depthFirstPrint_rec(graph, neighbour);
	}
};

// breadthFirst can only be done iteratively
// Not recursively;
const breadthFirstPrint = (graph, head) => {
	const queue = [ head ];
	// array used as a queue using
	// array.shift() shifts first element
	// array.pop() removes the last element
	while(queue.length){
		const curr = queue.shift();
		console.log(curr);
		for(let neighbour of graph[curr]){
			queue.push(neighbour);
		}
	}
};

const graph = {
	a: ['c', 'b'],
	b: ['d'], 
	c: ['e'],
	d: ['f'],
	e: [],
	f: []
};

// func call with 'a' as the head node
//depthFirstPrint(graph, 'a');
//depthFirstPrint_rec(graph, 'a');
breadthFirstPrint(graph, 'a');
