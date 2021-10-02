import logo from './logo.svg';
import './App.css';

const SlotM = (props)=>
{
  // let x = '😄' ;
  // let y = '😄';
  // let z = '😄';

  // let {x,y,z} = props;

  if(props.x=== props.y && props.y===props.z )
  {
    return (
      <div className = "Layout">
        <h1>{props.x} {props.y} {props.z} </h1>
        <h1>This is Matching</h1>
        <hr></hr>
      </div>
    )
  }
  else{
    return (
      <div className = "Layout">
        <h1>{props.x} {props.y} {props.z}</h1>
        <h1>This is Not Matching</h1>
        <hr></hr>
      </div>
    )
  }
}
function App() {
  return (
   <>
     <h1 className = "heading">Welcome to {" "} <span style = {{fontWeight : "bold"}}>Slot Machine Game</span></h1>
     <SlotM x = '😄' y = '😸' z = '🥰' />
     <SlotM x = '😄' y ='😄' z = '😄' />
     <SlotM x = '😄' y = '😸' z = '😸' />
     <SlotM x = '😄' y = '😸' z = '🥰' />

   </>
  );
}

export default App;
