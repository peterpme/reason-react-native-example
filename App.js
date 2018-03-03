import React from "react";
import { StyleSheet, Text, View } from "react-native";
import Label from "./re/Label.bs.js";

export default class App extends React.Component {
  render() {
    return (
      <View style={styles.container}>
        <Label label="REACT NATIVE" />
      </View>
    );
  }
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: "#fff",
    alignItems: "center",
    justifyContent: "center"
  }
});
