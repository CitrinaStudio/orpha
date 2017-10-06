package inside;

import String;
import inside.Util;
import orphadb.Table;
import Header;
import Random;
import HaxeLow;
import Sys;
import haxe.io.Input;

class Player {

    public function new() { //Creating new player
        var db = new HaxeLow('db.json');
        var players = db.col(TablePlayer);
        var player_params:Params = {pName: "", pAge: 0, pHp: 0, pMp: 0,
                  Ability: {pCha: 0, pInt: 0, pStr: 0, pDex: 0, pWis: 0, pCon: 0},
                  pCoordinate: {x: 0, y: 0}};

        player_params.pName = Util.inputString("Input your name: ");

        player_params.pAge = Util.inputInt("Input your age: ");


        var ability_is_ok = true;
        while(!ability_is_ok){
            
        };



        players.push(new TablePlayer(player_params));
        db.save();

        this.params = player_params;
    };

    public inline function get_player_params() : Params {
      return this.params;
    };

    public static function main(): Void {
        var ooo = new Player();
    };

    private var params:Dynamic;
}
