// Generated by BUCKLESCRIPT VERSION 5.0.6, PLEASE EDIT WITH CARE
'use strict';

var $$Array = require("bs-platform/lib/js/array.js");
var React = require("react");

function str(prim) {
  return prim;
}

var logo = (require('./assets/Logo.png'));

var headerImgae = (require('./assets/anugraha.jpg'));

var ar01 = (require('./assets/ARCHITECTURE/01.jpg'));

var ar02 = (require('./assets/ARCHITECTURE/02.png'));

var ar03 = (require('./assets/ARCHITECTURE/03.jpg'));

var ar04 = (require('./assets/ARCHITECTURE/04.jpg'));

var i01 = (require('./assets/INTERIOR/01.jpg'));

var i02 = (require('./assets/INTERIOR/02.jpg'));

var i03 = (require('./assets/INTERIOR/03.jpg'));

var i04 = (require('./assets/INTERIOR/04.jpg'));

var i05 = (require('./assets/INTERIOR/05.jpg'));

var i06 = (require('./assets/INTERIOR/06.jpg'));

var i07 = (require('./assets/INTERIOR/07.jpg'));

var i08 = (require('./assets/INTERIOR/08.jpg'));

var i09 = (require('./assets/INTERIOR/09.jpg'));

var b01 = (require('./assets/BACKWATERS/01.jpg'));

var b02 = (require('./assets/BACKWATERS/02.jpg'));

var b03 = (require('./assets/BACKWATERS/03.jpg'));

var b04 = (require('./assets/BACKWATERS/04.jpg'));

function renderText(caption, description) {
  return React.createElement("div", {
              className: "md:flex w-full md:mt-10 mt-4 py-4"
            }, React.createElement("div", {
                  className: "md:w-2/5 md:text-4xl text-2xl"
                }, caption), React.createElement("div", {
                  className: "md:w-3/5 md:text-xl text-md md:pt-0 pt-2"
                }, $$Array.map((function (para) {
                        return React.createElement("p", {
                                    key: para,
                                    className: "pt-4"
                                  }, para);
                      }), description)));
}

function renderForm(param) {
  return React.createElement("form", {
              className: "max-w-xl",
              id: "contactform",
              action: "https://formsubmit.io/send/bodhish@gmail.com",
              method: "POST"
            }, React.createElement("div", {
                  className: "w-full mt-4"
                }, React.createElement("input", {
                      className: "name appearance-none h-10 mt-1 block w-full text-gray-800 border border-gray-400 rounded py-2 px-4 text-sm bg-gray-100 hover:bg-gray-200 focus:outline-none focus:bg-white focus:border-primary-400",
                      id: "name",
                      name: "name",
                      placeholder: "Enter your name",
                      type: "text"
                    })), React.createElement("div", {
                  className: "w-full mt-4"
                }, React.createElement("input", {
                      className: "email appearance-none h-10 mt-1 block w-full text-gray-800 border border-gray-400 rounded py-2 px-4 text-sm bg-gray-100 hover:bg-gray-200 focus:outline-none focus:bg-white focus:border-primary-400",
                      id: "email",
                      name: "email",
                      placeholder: "Enter your email",
                      type: "email"
                    })), React.createElement("div", {
                  className: "w-full mt-4"
                }, React.createElement("input", {
                      className: " appearance-none h-10 mt-1 block w-full text-gray-800 border border-gray-400 rounded py-2 px-4 text-sm bg-gray-100 hover:bg-gray-200 focus:outline-none focus:bg-white focus:border-primary-400",
                      id: "subject",
                      name: "subject",
                      placeholder: "Subject",
                      type: "text"
                    })), React.createElement("div", {
                  className: "w-full mt-4"
                }, React.createElement("textarea", {
                      className: "message appearance-none mt-1 block w-full text-gray-800 border border-gray-400 rounded py-2 px-4 text-sm bg-gray-100 hover:bg-gray-200 focus:outline-none focus:bg-white focus:border-primary-400",
                      id: "message",
                      name: "message",
                      placeholder: "Your message",
                      rows: 3
                    })), React.createElement("input", {
                  className: "_formsubmit_id hidden",
                  name: "_formsubmit_id",
                  type: "text"
                }), React.createElement("input", {
                  className: "Submit flex-none bg-gray-900 uppercase hover:bg-gray-600 focus:outline-none focus:bg-primary-800 text-sm text-white font-bold py-2 px-6 tracking-normal rounded-lg mt-4",
                  type: "submit",
                  value: "Send Message"
                }));
}

function renderlines(description) {
  return React.createElement("div", undefined, $$Array.map((function (para) {
                    return React.createElement("p", {
                                key: para
                              }, para);
                  }), description));
}

function renderHeading(heading) {
  return React.createElement("div", {
              className: "md:mt-10 mt-4 md:text-5xl text-3xl"
            }, heading);
}

function renderTwoImages(image1, image2) {
  return React.createElement("div", {
              className: "md:flex"
            }, React.createElement("img", {
                  className: "md:w-1/2 md:pr-2 md:mt-4 mt-4 md:h-full",
                  alt: image1,
                  src: image1
                }), React.createElement("img", {
                  className: "md:w-1/2 md:pl-2 md:mt-4 mt-4 md:h-full",
                  alt: image2,
                  src: image2
                }));
}

function renderThreeImages(image1, image2, image3) {
  return React.createElement("div", {
              className: "md:flex md:mt-2 md:-mr-5"
            }, React.createElement("img", {
                  className: "md:w-1/3 md:pr-5 mt-4 md:h-full",
                  alt: image1,
                  src: image1
                }), React.createElement("img", {
                  className: "md:w-1/3 md:pr-5 mt-4 md:h-full",
                  alt: image2,
                  src: image2
                }), React.createElement("img", {
                  className: "md:w-1/3 md:pr-5 mt-4 md:h-full",
                  alt: image3,
                  src: image3
                }));
}

function Home(Props) {
  return React.createElement("div", undefined, React.createElement("section", {
                  className: "md:py-10 pt-10 pb-4"
                }, React.createElement("div", {
                      className: "flex justify-center clearfix px-4 md:pb-10 pb-4"
                    }, React.createElement("img", {
                          className: "float-center",
                          alt: "logo",
                          src: logo
                        })), React.createElement("div", {
                      className: "mt-4"
                    }, React.createElement("img", {
                          alt: "logo",
                          src: headerImgae
                        })), React.createElement("div", {
                      className: "md:flex w-full md:mt-10 mt-4 py-4"
                    }, React.createElement("div", {
                          className: "md:w-2/5 md:text-4xl text-2xl md:-mt-2"
                        }, "KERALAN GETAWAY"), React.createElement("div", {
                          className: "md:w-3/5 md:text-xl text-md md:pt-0 pt-2"
                        }, "Villa Anugraha is an elegant private residence in Aimanam, in the central Kerala district of\n          Kottayam. This home along the backwaters of the Meenachil River is an ode to slow living,\n          thoughtful design and the natural splendors of Kerala-that place they call 'God's Own\n          Country'. Aimanam was also the setting of Arundhati Roy's 1997 Booker Prize-winning novel ", React.createElement("span", {
                              className: "italic"
                            }, "The God of Small Things.")))), React.createElement("section", {
                  className: "md:py-4pt-10 pb-4"
                }, renderTwoImages(ar01, ar04), renderTwoImages(ar02, ar03), renderText("ARCHITECTURE", /* array */[
                      "The Villa is designed as a one-key property, ensuring that guests have privacy and a certain\n            amount of seclusion, whilst staying within a thriving estate which is also inhabited by the\n            family that runs Anugraha, and includes their three dogs, Google, Zuma and Pepper. Guests\n            will have the Villa to themselves, much as if it were their own house in the Keralan\n            countryside.",
                      "Villa Anugraha is a classic Keralan building, constructed more than a century ago. It was\n            restored under the direction of architect Bijoy Jain of Studio Mumbai and styled with\n            contemporary art from the homeowner's private collection, and an edit of design objects.",
                      "It is part of a 7.5 - acre property that is punctuated by canals, a thriving pond, vegetable\n            garden, many varieties of tropical fruit trees, hardwoods, bamboo, and various kinds of\n            ferns, designed and laid out by award-winning landscape architect Tom Stuart-Smith. Being\n            in the tropical countryside, there are charming multilegged creatures everywhere; they mean\n            no harm and they are an essential part of the life cycle of our part of the world."
                    ])), React.createElement("section", {
                  className: "md:py-4pt-10 pb-4"
                }, renderThreeImages(i01, i02, i03), renderThreeImages(i04, i05, i06), renderThreeImages(i07, i08, i09), renderText("INTERIORS", /* array */[
                      "The Villa can house up to six people, between a Master Bedroom, and the Attic Room.\n            While public areas like the living and dining rooms do not have air-conditioning, the\n            bedrooms are airconditioned. And there's WIFI, of course. The property is perfectly suited\n            for a couple, a family of four or six, or a party of six.",
                      "Anugraha's visitors are guests of the family, and they will be served homecooked Keralan\n            meals and attended by members of the house staff. Those who wish to cook occasionally\n            may use the Villa's well-appointed kitchen, and we will help you get the ingredients together.\n            Much of the produce comes from the organic kitchen garden, and around the village where\n            Anugraha is located."
                    ])), React.createElement("section", {
                  className: "md:py-4pt-10 pb-4"
                }, renderTwoImages(b01, b02), renderTwoImages(b03, b04), renderText("FACTS", /* array */[
                      "The property has a swimming pool that is suitable for adults and children. It is located within\n            a pool house that also contains a massage room where, upon request, we can arrange for a\n            traditional therapeutic Keralan massage.",
                      "We encourage guests to take things slow, enjoy the food and the environment. The local\n            boatman offers rides on the river that is the artery of this area. We can also arrange for a\n            tour of key historical sites around Kottayam.",
                      "The airport nearest to Kottayam city is the Kochi International airport, which is 2.5 hours\n            away.",
                      "For more information and further details, please write to us contact@anugrahakerala.com or give us a call on +9194956 31122.",
                      "Follow us on Instagram via @anugrahakerala",
                      "We are grateful to our friends who photographed Anugraha: Ashish Sahi, Derry Moore, and Wei Leng Tay."
                    ])), React.createElement("section", {
                  className: "md:py-4pt-10 pb-4"
                }, renderText("CONTACT", /* array */[""]), React.createElement("div", {
                      className: "md:flex w-full md:-mt-10 -mt-4 mt-4 py-4"
                    }, React.createElement("div", {
                          className: "md:w-2/5 md:pt-0 pt-2 justify-right"
                        }), React.createElement("div", {
                          className: "md:w-3/5 md:text-xl text-md md:pt-0 pt-2 justify-right -mt-12"
                        }, renderlines(/* array */[
                              "Anugraha Puthenpurayil",
                              "Prapuzha Kadavu",
                              "Pulikkuttissery PO",
                              "Aimanam.",
                              "Kottayam 686015",
                              "Kerala, India"
                            ])))), React.createElement("section", {
                  className: "md:py-4pt-10 pb-4"
                }, renderText("EMAIL US", /* array */[""]), React.createElement("div", {
                      className: "md:flex w-full md:-mt-10 -mt-4 mt-4 py-4"
                    }, React.createElement("div", {
                          className: "md:w-2/5 md:pt-0 pt-2 justify-right"
                        }), React.createElement("div", {
                          className: "md:w-3/5 md:text-xl text-md md:pt-0 pt-2 justify-right -mt-12"
                        }, renderForm(/* () */0)))));
}

var make = Home;

exports.str = str;
exports.logo = logo;
exports.headerImgae = headerImgae;
exports.ar01 = ar01;
exports.ar02 = ar02;
exports.ar03 = ar03;
exports.ar04 = ar04;
exports.i01 = i01;
exports.i02 = i02;
exports.i03 = i03;
exports.i04 = i04;
exports.i05 = i05;
exports.i06 = i06;
exports.i07 = i07;
exports.i08 = i08;
exports.i09 = i09;
exports.b01 = b01;
exports.b02 = b02;
exports.b03 = b03;
exports.b04 = b04;
exports.renderText = renderText;
exports.renderForm = renderForm;
exports.renderlines = renderlines;
exports.renderHeading = renderHeading;
exports.renderTwoImages = renderTwoImages;
exports.renderThreeImages = renderThreeImages;
exports.make = make;
/* logo Not a pure module */
