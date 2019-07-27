// Generated by BUCKLESCRIPT VERSION 5.0.6, PLEASE EDIT WITH CARE
'use strict';

var React = require("react");

function str(prim) {
  return prim;
}

var logo = (require('./assets/logo.png'));

var headerImgae = (require('./assets/anugraha.png'));

function renderText(caption, description) {
  return React.createElement("div", {
              className: "flex w-full mt-10"
            }, React.createElement("div", {
                  className: "w-1/2 text-4xl"
                }, caption), React.createElement("div", {
                  className: "w-1/2 text-xl"
                }, description));
}

function Home(Props) {
  return React.createElement("div", undefined, React.createElement("section", undefined, React.createElement("div", {
                      className: "flex justify-center px-4 py-10"
                    }, React.createElement("img", {
                          alt: "logo",
                          src: logo
                        })), React.createElement("div", undefined, React.createElement("img", {
                          alt: "logo",
                          src: headerImgae
                        })), renderText("VILLA ANUGRAHA", "Villa Anugraha is a private residence located in the central Kerala district of Kottayam. This residence along the backwaters of the Meenachil River is an ode to slow living, good design and the natural splendors of Kerala - that place they call God's Own Country'.")));
}

var make = Home;

exports.str = str;
exports.logo = logo;
exports.headerImgae = headerImgae;
exports.renderText = renderText;
exports.make = make;
/* logo Not a pure module */
