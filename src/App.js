import logo from "./logo.svg";
import { useState } from "react";
import "./App.css";

function App() {
  const [likes, setLikes] = useState(0);
  return (
    <div className="App">
      <header className="App-header">
        <img src={logo} className="App-logo" alt="logo" />
        <h1>Total number of likes {likes} </h1>
        <button onClick={() => setLikes(likes + 1)}>Like my repos</button>
        <p>try to smash that like options on my repos </p>
        <a
          className="App-link"
          href="https://github.com/Strong10mede/"
          target="_blank"
          rel="noopener noreferrer"
        >
          My GitHub Account
        </a>
      </header>
    </div>
  );
}

export default App;
