let str = ReasonReact.string;
let logo: string = [%raw "require('./assets/Logo.png')"];
let headerImgae: string = [%raw "require('./assets/anugraha.png')"];

let ar01: string = [%raw "require('./assets/ARCHITECTURE/01.jpg')"];
let ar02: string = [%raw "require('./assets/ARCHITECTURE/02.jpg')"];
let i01: string = [%raw "require('./assets/INTERIOR/01.jpg')"];
let i02: string = [%raw "require('./assets/INTERIOR/02.jpg')"];
let i03: string = [%raw "require('./assets/INTERIOR/03.jpg')"];
let i04: string = [%raw "require('./assets/INTERIOR/04.jpg')"];
let i05: string = [%raw "require('./assets/INTERIOR/05.jpg')"];
let i06: string = [%raw "require('./assets/INTERIOR/06.jpg')"];
let i07: string = [%raw "require('./assets/INTERIOR/07.jpg')"];
let i08: string = [%raw "require('./assets/INTERIOR/08.jpg')"];
let i09: string = [%raw "require('./assets/INTERIOR/09.jpg')"];
let b01: string = [%raw "require('./assets/BACKWATERS/01.jpg')"];
let b02: string = [%raw "require('./assets/BACKWATERS/02.jpg')"];
let b03: string = [%raw "require('./assets/BACKWATERS/03.jpg')"];
let b04: string = [%raw "require('./assets/BACKWATERS/04.jpg')"];

let renderText = (caption, description) =>
  <div className="md:flex w-full md:mt-10 mt-4 md:py-10 py-4">
    <div className="md:w-2/5 md:text-4xl text-2xl underline">
      {caption |> str}
    </div>
    <div className="md:w-3/5 md:text-xl text-sm md:pt-0 pt-2">
      {
        description
        |> Array.map(para => <p key=para className="pt-4"> {para |> str} </p>)
        |> React.array
      }
    </div>
  </div>;

let renderlines = (description) =>
  <div>
    {
      description
      |> Array.map(para => <p key=para> {para |> str} </p>)
      |> React.array
    }
  </div>;

let renderHeading = heading =>
  <div className="md:mt-10 mt-4 md:text-6xl text-4xl"> {heading |> str} </div>;

let renderTwoImages = (image1, image2) =>
  <div className="md:flex md:mt-10">
    <img className="md:w-1/2 md:pr-5 mt-4 h-auto" src=image1 alt=image1 />
    <img className="md:w-1/2 md:pl-5 mt-4 h-auto" src=image2 alt=image2 />
  </div>;

let renderThreeImages = (image1, image2, image3) =>
  <div className="md:flex md:mt-10">
    <img className="md:w-1/3 md:pr-5 mt-4" src=image1 alt=image1 />
    <img className="md:w-1/3 md:pl-5 md:pr-5 mt-4" src=image2 alt=image2 />
    <img className="md:w-1/3 md:pl-5 mt-4" src=image3 alt=image3 />
  </div>;

[@react.component]
let make = () =>
  <div>
    <section className="md:py-10 pt-10 pb-4">
      <div className="flex justify-center px-4 md:pb-10 pb-4">
        <img src=logo alt="logo" />
      </div>
      <div className="mt-4"> <img src=headerImgae alt="logo" /> </div>
      {
        renderText(
          "VILLA ANUGRAHA",
          [|
            "Villa Anugraha is a private residence located in the central Kerala district of Kottayam. This residence along the backwaters of the Meenachil River is an ode to slow living, good design and the natural splendors of Kerala - that place they call God's Own Country.",
          |],
        )
      }
    </section>
    <section className="md:py-10 pt-10 pb-4">
      {renderHeading("THE ARCHITECTURE")}
      {renderTwoImages(ar01, ar02)}
      {
        renderText(
          "HERITAGE & DESIGN",
          [|
            "Villa Anugraha is a private residence located in the central Kerala district of Kottayam. This residence along the backwaters of the Meenachil River is an ode to slow living, good design and the natural splendors of Kerala - that place they call 'God's Own Country'.",
            "The Villa is a classic Keralan building, constructed more than a century ago. It was restored under the direction of architect Bijoy Jain of Studio Mumbai and styled with contemporary art from the homeowner's private collection, and an edit of design objects. It is part of a 7.5 - acre property that is punctuated by canals, a thriving pond, vegetable garden, many varieties of tropical fruit trees, hardwoods, bamboo, and various kinds of ferns, designed and laid out by award-winning landscape architect Tom Stuart-Smith.",
            "The Villa is designed as an independent one-key property to ensure that guests have privacy and a certain amount of seclusion, whilst staying within a thriving estate which is also inhabited by the family that runs Anugraha, which includes their three dogs, Google, Zuma and Pepper.",
          |],
        )
      }
    </section>
    <section className="md:py-10 pt-10 pb-4">
      {renderHeading("THE INTERIORS")}
      {renderThreeImages(i01, i02, i03)}
      {renderThreeImages(i04, i05, i06)}
      {renderThreeImages(i07, i08, i09)}
      {
        renderText(
          "LIVING",
          [|
            "Villa Anugraha can house up to six people, between a Master Bedroom, and the Attic Room. Outfitted with all necessary mod-cons, and of course WIFI, the Villa is perfectly suited for a couple, a family of four or six, or a party of six.",
            "Guests will be served homecooked Keralan meals and attended by a member of the house staff. However, guests who wish to cook occasionally may use the Villa's well-appointed kitchen. Most of the ingredients come from the organic kitchen garden, and from around the village where Anugraha is located.",
          |],
        )
      }
    </section>
    <section className="md:py-10 pt-10 pb-4">
      {renderHeading("ALONG THE BACKWATERS")}
      {renderTwoImages(b01, b02)}
      {renderTwoImages(b03, b04)}
      {
        renderText(
          "THE GROUNDS",
          [|
            "The property has a swimming pool that is suitable for adults and children. It is located within a pool house that also has a massage room, where guests can enjoy the traditional Keralan massage therapy upon request.",
            "Villa Anugraha is located in Aymanam village, in Kottayam. This bountiful area on the banks of the Meenachil river, was the setting of Arundhati Roy's 1997 Booker Prize-winning novel God of Small Things. The 7.5-acre property is punctuated by canals, a thriving pond, vegetable garden, many varieties of tropical fruit trees, hardwoods, bamboo, and various kinds of ferns, designed and laid out by award-winning landscape architect Tom Stuart-Smith. The airport nearest to Kottayam is the Kochi International airport, which is 2.5 hours away.",
          |],
        )
      }
    </section>
    <section className="md:py-10 pt-10 pb-4">
      <div className="md:flex w-full md:mt-10 mt-4 md:py-10 py-4">
        <div className="md:w-2/5 md:text-6xl text-4xl">
          {"CONTACT" |> str}
        </div>
        <div className="md:w-3/5 md:text-xl text-sm md:pt-0 pt-2">
          {
            renderlines(
              [|
                "Anugraha Puthenpurayil",
                "Prapuzha Kadavu",
                "Pulikuttissery P.o.",
                "Aymanam.",
              |],

            )
          }
          <p className="pt-6"> {"Kottayam 686015" |> str} </p>
          <p className=""> {"Kerala, India" |> str} </p>
          <p className="pt-6"> {"contact@anugrahakerala.com" |> str} </p>
          <p className=""> {"+91 989232 92292" |> str} </p>
        </div>
      </div>
    </section>
  </div>;
