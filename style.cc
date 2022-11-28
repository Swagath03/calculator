* {
    padding: 0;
    margin: 0;
    box-sizing: border-box;
    outline: 0;
    transition: all 0.5s ease;
}

body {
    font-family: sans-serif;
}

a {
    text-decoration: none;
    color: #fff;
}

body {
    background-image: linear-gradient( to bottom right, rgb(123, 211, 69),rgb(54, 92, 207));
}

.container {
    height: 100vh;
    width: 100vw;
    display: grid;
    place-items: center;
}

.calculator {
    position: relative;
    height: auto;
    width: auto;
    padding: 20px;
    border-radius: 10px;
    box-shadow: 0 0 30px #000;
}

.theme-toggler {
    position: absolute;
    top: 30px;
    right: 30px;
    color: #fff;
    cursor: pointer;
    z-index: 1;
}

.theme-toggler.active {
    color: #333;
}

.theme-toggler.active::before {
    background-color: #fff;
}

.theme-toggler::before {
    content: '';
    height: 30px;
    width: 30px;
    position: absolute;
    top: 50%;
    transform: translate(-50%, -50%);
    border-radius: 50%;
    background-color: #333;
    z-index: -1;
}

#display {
    margin: 0 10px;
    height: 150px;
    width: auto;
    max-width: 270px;
    display: flex;
    align-items: flex-end;
    justify-content: flex-end;
    font-size: 30px;
    margin-bottom: 20px;
    overflow-x: scroll;
  }

#display::-webkit-scrollbar {
    display: block;
    height: 3px;
}

button {
    height: 60px;
    width: 60px;
    border: 0;
    border-radius: 30px;
    margin: 5px;
    font-size: 20px;
    cursor: pointer;
    transition: all 200ms ease;
}

button:hover {
    transform: scale(1.1);
}

button#equal {
    height: 130px;
}

/* light theme */

.calculator {
    background-color: #fff;
}

.calculator #display {
    color: #0a1e23;
}

.calculator button#clear {
    background-color: #ffd5d8;
    color: #fc4552;
}

.calculator button.btn-number {
    background-color: #c3eaff;
    color: #000000;
}

.calculator button.btn-operator {
    background-color: #ffd0fb;
    color: #f967f3;
  }
  
  .calculator button.btn-equal {
    background-color: #adf9e7;
    color: #000;
  }

  /* dark theme */

  .calculator.dark {
    background-color: #071115;
  }

  .calculator.dark #display {
    color: #f8fafb;
  }

  .calculator.dark button#clear {
    background-color: #2d191e;
    color: #bd3740;
  }

  .calculator.dark button.btn-number {
    background-color: #1b2f38;
    color: #f8fafb;
  }

  .calculator.dark button.btn-operator {
    background-color: #2e1f39;
    color: #aa00a4;
  }
  
  .calculator.dark button.btn-equal {
    background-color: #223323;
    color: #ffffff;
  }