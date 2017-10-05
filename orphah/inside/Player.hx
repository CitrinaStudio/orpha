package inside;

import String;
import inside.Util;
import orphadb;
import Header;
import Random;
import HaxeLow;
import Sys;
import haxe.io.Input;


class Player {

    public static function new_player() : Dynamic { //Creating new player
        Sys.print("Input your name: ");
        var userInput:String;
        userInput = Sys.stdin().readLine();
        Sys.println('Your name is ${userInput}');
        var db = new HaxeLow('db.json');
        var players = db.col(Tables.Player);
        Sys.println(db);
        Sys.println(players);
        players.push(new Tables.Player("Test", 1977));
        db.save();

        return 0;
    };
    public static function main(): Void {
        var player_params = {name: "namf", jopa: "ass"};
        Sys.println(player_params.jopa);
        new_player();
    };
}
