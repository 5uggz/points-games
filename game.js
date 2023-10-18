let points = 0;
let upgrade;
let multiply;
let upgradeinput;

while (true) {
    let line = prompt();
    if (line === "check") {
        console.log("Checking points...");
        console.log("points: " + points);
    } else if (line === "") {
        if (upgrade === "true") {
            if (multiply === "true") {
                points *= 2;
            } else {
                console.log("critical error with upgrades");
            }
        } else {
            console.log("+1 point");
            points++;
        }
    } else if (line === "exit") {
        console.log("exiting game...");
        break;
    } else if (line === "help") {
        console.log("commands");
        console.log("-check | checks your points");
        console.log("-reset | resets your points");
        console.log("-upgrade | you can purchase upgrades here");
        console.log("-exit | exits the game");
        console.log("more coming soon");
    } else if (line === "reset") {
