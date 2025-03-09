const socket = new WebSocket('ws://localhost:8080'); // 'ws' will automatically figure out where to send the request and how to handle it
socket.onmessage = ({data}) => {
	console.log('Message from the server ', data);
};

document.querySelector('button').onclick = () => {
	socket.send('hello');
};
