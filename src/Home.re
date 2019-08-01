let str = ReasonReact.string;
let logo: string = [%raw "require('./assets/Logo.png')"];
let headerImgae: string = [%raw "require('./assets/anugraha.jpg')"];

let ar01: string = [%raw "require('./assets/ARCHITECTURE/01.jpg')"];
let ar02: string = [%raw "require('./assets/ARCHITECTURE/02.png')"];
let ar03: string = [%raw "require('./assets/ARCHITECTURE/03.jpg')"];
let ar04: string = [%raw "require('./assets/ARCHITECTURE/04.jpg')"];
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
  <div className="md:flex w-full md:mt-10 mt-4 py-4">
    <div className="md:w-2/5 md:text-4xl text-2xl"> {caption |> str} </div>
    <div className="md:w-3/5 md:text-xl text-sm md:pt-0 pt-2">
      {
        description
        |> Array.map(para => <p key=para className="pt-4"> {para |> str} </p>)
        |> React.array
      }
    </div>
  </div>;

let renderlines = description =>
  <div>
    {
      description
      |> Array.map(para => <p key=para> {para |> str} </p>)
      |> React.array
    }
  </div>;

let renderHeading = heading =>
  <div className="md:mt-10 mt-4 md:text-5xl text-3xl"> {heading |> str} </div>;

let renderTwoImages = (image1, image2) =>
  <div className="md:flex">
    <img className="md:w-1/2 md:pr-5 md:mt-8 mt-4 md:h-full" src=image1 alt=image1 />
    <img className="md:w-1/2 md:pl-5 md:mt-8 mt-4 md:h-full" src=image2 alt=image2 />
  </div>;

let renderThreeImages = (image1, image2, image3) =>
  <div className="md:flex md:mt-2 md:-mr-5">
    <img className="md:w-1/3 md:pr-5 mt-4 md:h-full" src=image1 alt=image1 />
    <img className="md:w-1/3 md:pr-5 mt-4 md:h-full" src=image2 alt=image2 />
    <img className="md:w-1/3 md:pr-5 mt-4 md:h-full" src=image3 alt=image3 />
  </div>;

[@react.component]
let make = () =>
  <div>
    <section className="md:py-10 pt-10 pb-4">
      <div className="flex justify-center clearfix px-4 md:pb-10 pb-4">
        <img className="float-center" src=logo alt="logo" />
      </div>
      <div className="mt-4"> <img src=headerImgae alt="logo" /> </div>
      <div className="md:flex w-full md:mt-10 mt-4 py-4">
        <div className="md:w-2/5 md:text-4xl text-2xl">
          {"Keralan Getaway" |> str}
        </div>
        <div className="md:w-3/5 md:text-xl text-sm md:pt-0 pt-2">
          {
            "Villa Anugraha is an elegant private residence in Aimanam, in the central Kerala district of
          Kottayam. This home along the backwaters of the Meenachil River is an ode to slow living,
          thoughtful design and the natural splendors of Kerala-that place they call 'God's Own
          Country'. Aimanam was also the setting of Arundhati Roy's 1997 Booker Prize-winning novel "
            |> str
          }
          <span className="italic">
            {"The God of Small Things." |> str}
          </span>
        </div>
      </div>
    </section>
    <section className="md:py-4pt-10 pb-4">
      {renderTwoImages(ar01, ar02)}
      {renderTwoImages(ar03, ar04)}
      {
        renderText(
          "ARCHITECTURE",
          [|
            "The Villa is designed as a one-key property, ensuring that guests have privacy and a certain
            amount of seclusion, whilst staying within a thriving estate which is also inhabited by the
            family that runs Anugraha, and includes their three dogs, Google, Zuma and Pepper. Guests
            will have the Villa to themselves, much as if it were their own house in the Keralan
            countryside.",
            "Villa Anugraha is a classic Keralan building, constructed more than a century ago. It was
            restored under the direction of architect Bijoy Jain of Studio Mumbai and styled with
            contemporary art from the homeowner's private collection, and an edit of design objects.",
            "it is part of a 7.5 - acre property that is punctuated by canals, a thriving pond, vegetable
            garden, many varieties of tropical fruit trees, hardwoods, bamboo, and various kinds of
            ferns, designed and laid out by award-winning landscape architect Tom Stuart-Smith. Being
            in the tropical countryside, there are charming multilegged creatures everywhere; they mean
            no harm and they are an essential part of the life cycle of our part of the world.",
          |],
        )
      }
    </section>
    <section className="md:py-4pt-10 pb-4">
      {renderThreeImages(i01, i02, i03)}
      {renderThreeImages(i04, i05, i06)}
      {renderThreeImages(i07, i08, i09)}
      {
        renderText(
          "THE INTERIORS",
          [|
            "The Villa can house up to six people, between a Master Bedroom, and the Attic Room.
            While public areas like the living and dining rooms do not have air-conditioning, the
            bedrooms are airconditioned. And there's WIFI, of course. The property is perfectly suited
            for a couple, a family of four or six, or a party of six.",
            "Anugraha's visitors are guests of the family, and they will be served homecooked Keralan
            meals and attended by members of the house staff. Those who wish to cook occasionally
            may use the Villa's well-appointed kitchen, and we will help you get the ingredients together.
            Much of the produce comes from the organic kitchen garden, and around the village where
            Anugraha is located.",
          |],
        )
      }
    </section>
    <section className="md:py-4pt-10 pb-4">
      {renderTwoImages(b01, b02)}
      {renderTwoImages(b03, b04)}
      {
        renderText(
          "FACTS",
          [|
            "The property has a swimming pool that is suitable for adults and children. It is located within
            a pool house that also contains a massage room where, upon request, we can arrange for a
            traditional therapeutic Keralan massage.",
            "We encourage guests to take things slow, enjoy the food and the environment. The local
            boatman offers rides on the river that is the artery of this area. We can also arrange for a
            tour of key historical sites around Kottayam.",
            "The airport nearest to Kottayam city is the Kochi International airport, which is 2.5 hours
            away.",
            "For more information and further details, please write to us contact@anugrahakerala.com
            Or give us a call on +91 94956 31122.",
          |],
        )
      }
    </section>
    <section className="md:py-4pt-10 pb-4">
      {renderText("CONTACT", [|""|])}
      <div className="md:flex w-full md:-mt-10 -mt-4 mt-4 py-4">
        <div className="md:w-2/5 md:pt-0 pt-2 justify-right" />
        <div
          className="md:w-3/5 md:text-xl text-sm md:pt-0 pt-2 justify-right -mt-12">
          {
            renderlines([|
              "Anugraha Puthenpurayil",
              "Prapuzha Kadavu",
              "Pulikkuttissery PO",
              "Aimanam.",
              "Kottayam 686015",
              "Kerala, India"

            |])
          }
        </div>
      </div>
    </section>
  </div>;
