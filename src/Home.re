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
  <div className="md:flex w-full md:mt-8 mt-4 py-4">
    <div className="md:w-2/5 md:text-4xl text-2xl"> {caption |> str} </div>
    <div className="md:w-3/5 md:text-xl text-md md:pt-0 pt-2">
      {
        description
        |> Array.map(para => <p key=para className="pt-4"> {para |> str} </p>)
        |> React.array
      }
    </div>
  </div>;

let renderForm = () =>
  <form
    className="max-w-xl"
    id="contactform"
    action="https://formspree.io/contact@anugrahakerala.com"
    method="POST">
    <div className="w-full mt-4">
      <input
        id="name"
        type_="text"
        name="name"
        placeholder="Enter your name"
        required=true
        className="name appearance-none h-10 mt-1 block w-full text-gray-800 border border-gray-400 rounded py-2 px-4 text-sm bg-gray-100 hover:bg-gray-200 focus:outline-none focus:bg-white focus:border-primary-400"
      />
    </div>
    <div className="w-full mt-4">
      <input
        id="email"
        type_="email"
        name="email"
        required=true
        placeholder="Enter your email"
        className="email appearance-none h-10 mt-1 block w-full text-gray-800 border border-gray-400 rounded py-2 px-4 text-sm bg-gray-100 hover:bg-gray-200 focus:outline-none focus:bg-white focus:border-primary-400"
      />
    </div>
    <div className="w-full mt-4">
      <input
        id="subject"
        type_="text"
        name="subject"
        required=true
        placeholder="Subject"
        className=" appearance-none h-10 mt-1 block w-full text-gray-800 border border-gray-400 rounded py-2 px-4 text-sm bg-gray-100 hover:bg-gray-200 focus:outline-none focus:bg-white focus:border-primary-400"
      />
    </div>
    <div className="w-full mt-4">
      <textarea
        className="message appearance-none mt-1 block w-full text-gray-800 border border-gray-400 rounded py-2 px-4 text-sm bg-gray-100 hover:bg-gray-200 focus:outline-none focus:bg-white focus:border-primary-400"
        name="message"
        required=true
        placeholder="Your message"
        id="message"
        rows=3
      />
    </div>
    <input
      className="Submit flex-none bg-gray-900 uppercase hover:bg-gray-600 focus:outline-none focus:bg-primary-800 text-sm text-white font-bold py-2 px-6 tracking-normal rounded-lg mt-4"
      value="Send Message"
      type_="submit"
    />
  </form>;

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
    <img
      className="md:w-1/2 md:pr-2 md:mt-4 mt-4 md:h-full"
      src=image1
      alt=image1
    />
    <img
      className="md:w-1/2 md:pl-2 md:mt-4 mt-4 md:h-full"
      src=image2
      alt=image2
    />
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
      <div className="text-center">
        <div className="flex justify-center clearfix px-4 md:pb-10 pb-4">
          <img className="float-center" src=logo alt="logo" />
        </div>
      </div>
      <div className="mt-4"> <img src=headerImgae alt="logo" /> </div>
      <div className="md:flex w-full md:mt-10 mt-4 py-4 pb-1">
        <div className="md:w-2/5 md:text-4xl text-2xl md:-mt-2">
          {"A BOUTIQUE HOMESTAY" |> str}
        </div>
        <div className="md:w-3/5 md:text-xl text-md md:pt-0 pt-2">
          {
            "Anugraha is an elegant homestay in Aymanam, in the central Kerala district of Kottayam. Located near the popular lakefront tourist spot of Kumarakom, this house along the Meenachil River backwaters is an ode to slow living, Keralan hospitality and the natural splendours of this tropical travel destination."
            |> str
          }
        </div>
      </div>
    </section>
    <section className="md:py-4pt-10 pb-4">
      {renderTwoImages(ar01, ar04)}
      {renderTwoImages(ar02, ar03)}
      {
        renderText(
          "THE VILLA",
          [|
            "Guests will stay in an independent villa, attended by two members of the house-staff. We take just one booking at a time, in order to ensure guests have our full attention and care. Think of a stay at Anugraha as a holiday visit to a friend's home in the Kerala countryside.",
            "The Villa is a heritage home, constructed more than a century ago. It was restored under the direction of architect Bijoy Jain of Studio Mumbai and styled with contemporary art from the family's private collection, and an edit of design objects.",
          |],
        )
      }
      <div className="md:flex w-full">
        <div className="md:w-2/5 md:text-4xl text-2xl md:-mt-2" />
        <div className="md:w-3/5 md:text-xl text-md md:pt-0 pt-2">
          {
            "There's plenty of quiet and privacy when you prefer, but when you'd rather not be alone then we invite you to take in the sights and sounds of the thriving estate, which is inhabited by the family that runs Anugraha, and includes their three dogs, Google, Zuma and Pepper. The 7.5 - acre property is punctuated by canals, a pond, vegetable garden, many varieties of tropical fruit trees, hardwoods, bamboo, and various kinds of ferns, designed and laid out by award-winning landscape architect Tom Stuart-Smith. "
            |> str
          }
          <div className="pt-4">
            {
              "A literary factoid: Aymanam village is the setting of Arundhati Roy's 1997 Booker Prize-winning novel "
              |> str
            }
            <span className="italic">
              {"The God of Small Things. " |> str}
            </span>
          </div>
          <div className="pt-4">
            {
              "Being in the tropical countryside, there are charming multilegged creatures everywhere; they mean no harm and they are an essential part of the life cycle of our part of the world."
              |> str
            }
          </div>
        </div>
      </div>
    </section>
    <section className="md:py-4pt-10 pb-4">
      {renderThreeImages(i01, i02, i03)}
      {renderThreeImages(i04, i05, i06)}
      {renderThreeImages(i07, i08, i09)}
      {
        renderText(
          "FACILITIES",
          [|
            "The Villa can house up to six people, between a Master Bedroom with a Queen-size bed, and the Attic Room, which has a Queen-size bed and two single beds, plus an en suite bathroom. While public areas like the living and dining rooms do not have air-conditioning, the bedrooms are airconditioned. And there's WIFI, of course. The property is perfectly suited for a couple, a family of four or six, or a party of six.",
            "A bathroom enclosure on the ground floor is open-roofed and designed for separate but common use among the guests staying the villa.",
            "The home also has a little study room and a well-appointed kitchen.",
          |],
        )
      }
    </section>
    <section className="-mt-10">
      {
        renderText(
          "DINING",
          [|
            "At Anugraha, we serve traditional Keralan food in the style of the Syrian Christian community, to which the homeowners belong. The food of our region can be deliciously vegan, with the generous use of coconut, rice and vegetables, or the complete opposite, with plenty of seafood and beef. It can be as spicy as it should be, or as spicy as you prefer. Please let us know at the time of reservation if you have any particular restrictions, and we will do our best to accommodate requests. ",
            "Those who wish to cook occasionally may do so, and we are happy to advise. You may use anything from the organic kitchen garden, which has seasonal herbs and vegetables throughout the year. The larder is well-stocked with the basics (milk, bread, eggs) plus a wide choice of teas, and coffee.",
          |],
        )
      }
    </section>
    <section className="md:py-4pt-10 pb-4">
      {renderTwoImages(b01, b02)}
      {renderTwoImages(b03, b04)}
      {
        renderText(
          "THINGS TO DO",
          [|
            "The property has a swimming pool that is suitable for adults and children. It is located within a pool house that also contains a massage room where, upon request, we can arrange for a traditional therapeutic Keralan massage.",
            "The vast greens of the property and the village offer great prospects for long walks, and birdwatching.",
            "Villa Anugraha is located along the backwaters, within some of the most beautiful boating routes in the state. Take a languorous ride along the canals in a snake boat, captained by a local boatman.",
            "Birds are the constant background choir of this estate. If you'd like to see the songsters then there are plenty of opportunities to sight families of kingfisher, schoolboy warbler, woodpecker, egret, duck, heron, Brahminy eagle, and many other species.",
          |],
        )
      }
    </section>
    <section className="-mt-10">
      {
        renderText(
          "GETTING HERE",
          [|
            "The airport nearest to us is the Cochin International Airport, which is 2.5 hours away. Upon request, we can arrange for pick-up and drop-off to the airport.",
          |],
        )
      }
    </section>
    <section className="md:py-4pt-10 pb-4">
      {
        renderText(
          "GET IN TOUCH",
          [|
            "For more information and further details, please write to contact@anugrahakerala.com or give us a call on +9194956 31122.",
            "Follow us on Instagram via @anugrahakerala.",
          |],
        )
      }
      <div className="md:flex w-full md:-mt-10 -mt-4 mt-4 py-4">
        <div className="md:w-2/5 md:pt-0 pt-2 justify-right" />
        <div
          className="md:w-3/5 md:text-xl text-md md:pt-0 pt-2 justify-right mt-4">
          {renderForm()}
          <div className="pt-6 pb-2 text-2xl font-semibold ">
            {"ADDRESS" |> str}
          </div>
          {
            renderlines([|
              "Anugraha Puthenpurayil",
              "Prapuzha Kadavu",
              "Pulikkuttissery PO",
              "Aimanam.",
              "Kottayam 686015",
              "Kerala, India",
            |])
          }
        </div>
      </div>
    </section>
    <section className="md:py-4pt-10 pb-4">
      {
        renderText(
          "CREDIT",
          [|
            "We are grateful to our friends who photographed Anugraha: Ashish Sahi, Derry Moore, and Wei Leng Tay.",
          |],
        )
      }
    </section>
  </div>;
