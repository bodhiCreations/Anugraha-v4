let str = ReasonReact.string;
let logo: string = [%raw "require('./assets/logo.png')"];
let headerImgae: string = [%raw "require('./assets/anugraha.png')"];

let renderText = (caption, description) =>
  <div className="flex w-full mt-10">
    <div className="w-1/2 text-4xl"> {caption |> str} </div>
    <div className="w-1/2 text-xl"> {description |> str} </div>
  </div>;

[@react.component]
let make = () =>
  <div>
    <section>
      <div className="flex justify-center px-4 py-10">
        <img src=logo alt="logo" />
      </div>
      <div> <img src=headerImgae alt="logo" /> </div>
      {renderText("VILLA ANUGRAHA", "Villa Anugraha is a private residence located in the central Kerala district of Kottayam. This residence along the backwaters of the Meenachil River is an ode to slow living, good design and the natural splendors of Kerala - that place they call God's Own Country'.")}
    </section>
  </div>;
