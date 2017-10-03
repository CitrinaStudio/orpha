package inside;

import Sys;
import ANSI;
import Math;

import Header;

using Lambda;

class Util { //Class for Utils functions
    public static function clear(): Void{ // Function for clear console
        var answer_code:Int = Sys.command("cls");

        if (answer_code == 127){
            Sys.command("clear");
        }
    };

    public static function cprint(msg:String, bold_include, fg, bg): Void{ //Function for color print
        Sys.println(ANSI.set(fg, bg, bold_include) + '${msg}' + ANSI.set(DefaultForeground, DefaultBackground, BoldOff));
    };

    public static function get_spell_effect(spell:String, enemy_danger_coeff:Float): Array<Dynamic> { //Function for get effect of casted spell
        var enemy_danger_coeff:Float = Math.abs(enemy_danger_coeff);

        if(["Iron", "Ice"].has(Header.MAGIC_SPELLS()[spell]["category"])){
          var count_block_action = Math.ceil(
            Math.PI * Random.float(0, 0.2) * Math.sqrt(enemy_danger_coeff));
          cprint('You block enemy action in ${count_block_action} moves.', Bold, Blue, DefaultBackground);
          return ["block_enemy_action", count_block_action];
        }else{
          return ["", 0];
        };
    };
}
