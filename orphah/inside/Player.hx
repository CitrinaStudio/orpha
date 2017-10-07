package inside;

import String;
import inside.Util;
import orphadb.Table;
import Header;
import Random;
import HaxeLow;
import Sys;
import haxe.io.Input;
import haxe.io.Bytes;
import haxe.crypto.Adler32;

class Player {

    public function new() { //Creating new player
        var db = new HaxeLow('db.json');
        var players = db.col(TablePlayer);
        var player_params:Params = {pName: "", pAge: 0, pHp: 0, pMp: 0,
                  Ability: {pCha: 0, pInt: 0, pStr: 0, pDex: 0, pWis: 0, pCon: 0},
                  pCoordinate: {x: 0, y: 0}};

        player_params.pName = Util.inputString("Input your name: ");

        player_params.pAge = Util.inputInt("Input your age: ");


        if (player_params.pAge > 1000) {
          Util.cprint('You type ${player_params.pAge}, but maximum age is 1000.', Bold, Green, BlackBack);
          player_params.pAge = 1000;
        }

        player_params.pHp = Header.CLASSES_BONUSES()[Header.DEFAULT_CLASS()]['hp'] + Header.CLASSES_ABILITY()[Header.DEFAULT_CLASS()]['hp'] + 7;

        player_params.pMp = Header.CLASSES_ABILITY()[Header.DEFAULT_CLASS()]['mp'] + Header.CLASSES_BONUSES()[Header.DEFAULT_CLASS()]['mp'];

        player_params.Ability.pCha = Header.CLASSES_ABILITY()[Header.DEFAULT_CLASS()]['cha'] + Header.CLASSES_BONUSES()[Header.DEFAULT_CLASS()]['cha'];

        player_params.Ability.pInt = Header.CLASSES_ABILITY()[Header.DEFAULT_CLASS()]['int'] + Header.CLASSES_BONUSES()[Header.DEFAULT_CLASS()]['int'];

        player_params.Ability.pStr = Header.CLASSES_ABILITY()[Header.DEFAULT_CLASS()]['str'] + Header.CLASSES_BONUSES()[Header.DEFAULT_CLASS()]['str'];

        player_params.Ability.pDex = Header.CLASSES_ABILITY()[Header.DEFAULT_CLASS()]['dex'] + Header.CLASSES_BONUSES()[Header.DEFAULT_CLASS()]['dex'];

        player_params.Ability.pWis = Header.CLASSES_ABILITY()[Header.DEFAULT_CLASS()]['wis'] + Header.CLASSES_BONUSES()[Header.DEFAULT_CLASS()]['wis'];

        player_params.Ability.pCon = Header.CLASSES_ABILITY()[Header.DEFAULT_CLASS()]['con'] + Header.CLASSES_BONUSES()[Header.DEFAULT_CLASS()]['con'];


        Sys.print(player_params);


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
