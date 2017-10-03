package inside;

import Header;
import Random;
import Sys;
import ANSI;
import haxe.crypto.*;
import haxe.io.Bytes;
import haxe.ds.*;

using Lambda;

class Map{
  public static function get_map_point(map_arr:Array<String>, coor:Array<Int>) : String {
    return map_arr[coor[1]].charAt(coor[0]);
  };

  public static function get_player_spawn(map_arr:Array<String>) : Array<Int> {

      var spawn_finded:Bool = false;
      var string_i:Int = 0;

      while (!spawn_finded) {
          if (map_arr[string_i].split("").has("p")){
            spawn_finded = true;
          }else{
            string_i += 1;
            };
        };
      return [map_arr[string_i].indexOf("p"), string_i];
  };

  public static function get_map_detail(map_arr:Array<String>, coor:Array<Int>, player_params:StringMap<Dynamic>, motion_vector:String): Array<Int>{
    var coor_hash: Bytes = Bytes.ofString("sdf");
    var map_notation: String = get_map_point(map_arr, coor);

    Sys.println(Header.CONVENTIONAL_NOTATIONAL_WITHOUT_DETAIL());

    return [0, 0];
  };
  
  
  static function main() : Void {
    Sys.println(get_map_detail(["asfasf", "fdsdgsdgsdg", "sdgfsdgsdg", "asfpagsdg"], [5, 0], ["asf"=>"sdg"], "left"));
    Util.cprint("asf", Bold, Black, WhiteBack);

  };
}
