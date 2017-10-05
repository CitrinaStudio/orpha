package inside;

import String;
import inside.Util;
import orphadb.Table;
import Header;
import Random;
import HaxeLow;
import Sys;
import haxe.io.Input;

typedef Params = {
  pName: String, pAge: Int,
  pClass: String, pHp: Int,
  pMp: Int, pStr: Int,
  pDex: Int, pCon: Int,
  pInt: Int, pWis: Int,
  pCha: Int};

class Player {

    public function new() { //Creating new player
        var db = new HaxeLow('db.json');
        var players = db.col(TablePlayer);
        var player_params:Params = {pName: "", pAge: 0, pClass: "", pHp: 0, pMp: 0, pStr: 0, pDex: 0, pCon: 0, pInt: 0, pWis: 0, pCha: 0};

        Sys.print("Input your name: ");
        var name:String = Sys.stdin().readLine();
        player_params.pName = name;
        Sys.println('Your name is ${name}');

        Sys.println(player_params);

        players.push(new TablePlayer(player_params));
        db.save();

        this.params = player_params;
    };
    public static function main(): Void {
        new Player();
    };

    public var params:Dynamic;
}
