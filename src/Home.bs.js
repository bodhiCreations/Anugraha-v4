// Generated by BUCKLESCRIPT VERSION 5.0.6, PLEASE EDIT WITH CARE
'use strict';

var $$Array = require("bs-platform/lib/js/array.js");
var React = require("react");

function str(prim) {
  return prim;
}

var logo = (require('./assets/Logo.png'));

var headerImgae = (require('./assets/anugraha.png'));

var ar01 = (require('./assets/ARCHITECTURE/01.jpg'));

var ar02 = (require('./assets/ARCHITECTURE/02.jpg'));

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
              className: "md:flex w-full md:mt-10 mt-4 md:py-10 py-4"
            }, React.createElement("div", {
                  className: "md:w-2/5 md:text-4xl text-2xl underline"
                }, caption), React.createElement("div", {
                  className: "md:w-3/5 md:text-xl text-sm md:pt-0 pt-2"
                }, $$Array.map((function (para) {
                        return React.createElement("p", {
                                    key: para,
                                    className: "pt-4"
                                  }, para);
                      }), description)));
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
              className: "md:mt-10 mt-4 md:text-6xl text-4xl"
            }, heading);
}

function renderTwoImages(image1, image2) {
  return React.createElement("div", {
              className: "md:flex md:mt-10"
            }, React.createElement("img", {
                  className: "md:w-1/2 md:pr-5 mt-4 h-auto",
                  alt: image1,
                  src: image1
                }), React.createElement("img", {
                  className: "md:w-1/2 md:pl-5 mt-4 h-auto",
                  alt: image2,
                  src: image2
                }));
}

function renderThreeImages(image1, image2, image3) {
  return React.createElement("div", {
              className: "md:flex md:mt-10"
            }, React.createElement("img", {
                  className: "md:w-1/3 md:pr-5 mt-4",
                  alt: image1,
                  src: image1
                }), React.createElement("img", {
                  className: "md:w-1/3 md:pl-5 md:pr-5 mt-4",
                  alt: image2,
                  src: image2
                }), React.createElement("img", {
                  className: "md:w-1/3 md:pl-5 mt-4",
                  alt: image3,
                  src: image3
                }));
}

function Home(Props) {
  return React.createElement("div", undefined, React.createElement("section", {
                  className: "md:py-10 pt-10 pb-4"
                }, React.createElement("div", {
                      className: "flex justify-center px-4 md:pb-10 pb-4"
                    }, React.createElement("img", {
                          alt: "logo",
                          src: logo
                        })), React.createElement("div", {
                      className: "mt-4"
                    }, React.createElement("img", {
                          alt: "logo",
                          src: headerImgae
                        })), renderText("VILLA ANUGRAHA", /* array */["Villa Anugraha is a private residence located in the central Kerala district of Kottayam. This residence along the backwaters of the Meenachil River is an ode to slow living, good design and the natural splendors of Kerala - that place they call God's Own Country."])), React.createElement("section", {
                  className: "md:py-10 pt-10 pb-4"
                }, renderHeading("THE ARCHITECTURE"), renderTwoImages(ar01, ar02), renderText("HERITAGE & DESIGN", /* array */[
                      "Villa Anugraha is a private residence located in the central Kerala district of Kottayam. This residence along the backwaters of the Meenachil River is an ode to slow living, good design and the natural splendors of Kerala - that place they call 'God's Own Country'.",
                      "The Villa is a classic Keralan building, constructed more than a century ago. It was restored under the direction of architect Bijoy Jain of Studio Mumbai and styled with contemporary art from the homeowner's private collection, and an edit of design objects. It is part of a 7.5 - acre property that is punctuated by canals, a thriving pond, vegetable garden, many varieties of tropical fruit trees, hardwoods, bamboo, and various kinds of ferns, designed and laid out by award-winning landscape architect Tom Stuart-Smith.",
                      "The Villa is designed as an independent one-key property to ensure that guests have privacy and a certain amount of seclusion, whilst staying within a thriving estate which is also inhabited by the family that runs Anugraha, which includes their three dogs, Google, Zuma and Pepper."
                    ])), React.createElement("section", {
                  className: "md:py-10 pt-10 pb-4"
                }, renderHeading("THE INTERIORS"), renderThreeImages(i01, i02, i03), renderThreeImages(i04, i05, i06), renderThreeImages(i07, i08, i09), renderText("LIVING", /* array */[
                      "Villa Anugraha can house up to six people, between a Master Bedroom, and the Attic Room. Outfitted with all necessary mod-cons, and of course WIFI, the Villa is perfectly suited for a couple, a family of four or six, or a party of six.",
                      "Guests will be served homecooked Keralan meals and attended by a member of the house staff. However, guests who wish to cook occasionally may use the Villa's well-appointed kitchen. Most of the ingredients come from the organic kitchen garden, and from around the village where Anugraha is located."
                    ])), React.createElement("section", {
                  className: "md:py-10 pt-10 pb-4"
                }, renderHeading("ALONG THE BACKWATERS"), renderTwoImages(b01, b02), renderTwoImages(b03, b04), renderText("THE GROUNDS", /* array */[
                      "The property has a swimming pool that is suitable for adults and children. It is located within a pool house that also has a massage room, where guests can enjoy the traditional Keralan massage therapy upon request.",
                      "Villa Anugraha is located in Aymanam village, in Kottayam. This bountiful area on the banks of the Meenachil river, was the setting of Arundhati Roy's 1997 Booker Prize-winning novel God of Small Things. The 7.5-acre property is punctuated by canals, a thriving pond, vegetable garden, many varieties of tropical fruit trees, hardwoods, bamboo, and various kinds of ferns, designed and laid out by award-winning landscape architect Tom Stuart-Smith. The airport nearest to Kottayam is the Kochi International airport, which is 2.5 hours away."
                    ])), React.createElement("section", {
                  className: "md:py-10 pt-10 pb-4"
                }, React.createElement("div", {
                      className: "md:flex w-full md:mt-10 mt-4 md:py-10 py-4"
                    }, React.createElement("div", {
                          className: "md:w-2/5 md:text-6xl text-4xl"
                        }, "CONTACT"), React.createElement("div", {
                          className: "md:w-3/5 md:text-xl text-sm md:pt-0 pt-2"
                        }, renderlines(/* array */[
                              "Anugraha Puthenpurayil",
                              "Prapuzha Kadavu",
                              "Pulikuttissery P.o.",
                              "Aymanam."
                            ]), React.createElement("p", {
                              className: "pt-6"
                            }, "Kottayam 686015"), React.createElement("p", {
                              className: ""
                            }, "Kerala, India"), React.createElement("p", {
                              className: "pt-6"
                            }, "contact@anugrahakerala.com"), React.createElement("p", {
                              className: ""
                            }, "+91 989232 92292")))));
}

var make = Home;

exports.str = str;
exports.logo = logo;
exports.headerImgae = headerImgae;
exports.ar01 = ar01;
exports.ar02 = ar02;
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
exports.renderlines = renderlines;
exports.renderHeading = renderHeading;
exports.renderTwoImages = renderTwoImages;
exports.renderThreeImages = renderThreeImages;
exports.make = make;
/* logo Not a pure module */
