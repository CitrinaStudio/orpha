package orphah.inside;

import Sys;
import hx.strings.ansi.Ansi;
import Math;

import orphah.Header.*;

class Util {
    static function clear(){
        var answer_code:Int = Sys.command("cls");

        if (answer_code == 127){
            Sys.command("clear");
        }
    };

    static function cprint(msg:String, bg, fg) {
        var stdout = Sys.stdout();
        stdout.writeString(Ansi.fg(fg));
        stdout.writeString(Ansi.bg(bg));
        stdout.writeString(msg + "\n"); 
        stdout.writeString(Ansi.attr(RESET));
    };

    static function get_spell_effect(spell:String, enemy_danger_coeff:Float) {
        var enemy_danger_coeff:Float = Math.abs(enemy_danger_coeff);
        
        
        trace(enemy_danger_coeff);
    }
    static function main() {
        trace("Hello, world");
        cprint("Masx", BLACK, GREEN);
        get_spell_effect("sd", -48.124124124152123522);
        trace(CLL);
    }
}
