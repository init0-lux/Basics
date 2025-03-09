import logo from './logo.svg';
import { useRef } from 'react';
import './App.css';

function Counter() {
  let ref = useRef(0);

  function handleClick() {
    ref.current = ref.current + 1;
    alert('You clicked ' + ref.current + ' times!');
  }

  return(
    <button onClick={handleClick}> Click me! </button>
  )
}

function App() {
  return (
    <div>
      <Counter />
    </div>
  )
}

export default App
