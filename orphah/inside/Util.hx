package inside;

import Sys;
import hx.strings.*;
import ANSI;
import Math;

import Header;

class Util {
    static function clear(){
        var answer_code:Int = Sys.command("cls");

        if (answer_code == 127){
            Sys.command("clear");
        }
    };

    static function cprint(msg:String, bold_include, fg) {
        Sys.println(ANSI.set(fg, bold_include) + '${msg}' + ANSI.set(DefaultForeground, BoldOff));
    };

    static function get_spell_effect(spell:String, enemy_danger_coeff:Float) {
        var enemy_danger_coeff:Float = Math.abs(enemy_danger_coeff);

        if(Header.MAGIC_SPELLS()[spell]["category"] == "Ice"){
          var count_block_action = Math.ceil(
            Math.PI * Random.float(0, 0.2) * Math.sqrt(enemy_danger_coeff));
          cprint('You block enemy action in ${count_block_action} moves.', Bold, Blue);
        }
    };

    static function main() {
        var g:Array<Dynamic> = [334, 34, 35, "asf"];
        Sys.println(g);
        cprint("Masx", Bold, Green);
        get_spell_effect("Iceblast", -48.124124124152123522);
    };
}
