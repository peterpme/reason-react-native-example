open BsReactNative;

let component = ReasonReact.statelessComponent("Label");

let styles =
  StyleSheet.create(
    Style.(
      {
        "container":
          style([
            borderRadius(4.),
            paddingHorizontal(Pt(10.)),
            paddingVertical(Pt(2.)),
            backgroundColor("rgba(125, 147, 168, 0.5)")
          ]),
        "label":
          style([color("white"), textAlign(Center), fontSize(Float(11.))])
      }
    )
  );

let make = (~label, _children) => {
  ...component,
  render: _self =>
    <View style=styles##container>
      <Text style=styles##label>
        (ReasonReact.stringToElement(label))
      </Text>
    </View>
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps =>
    make(~label=jsProps##label, [||])
  );


