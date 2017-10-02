package inside;

import Header;
import Random;
import Sys;
import ANSI;
import haxe.crypto.*;

import inside.*;

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
  public static function get_map_detail(map_arr:Array<String>, coor:Array<Int>, player_params:Map<String, Dynamic>, motion_vector:String): {
    var coor_hash: String = new Crc32();
  };
  static function main() : Void {
    Sys.println(get_player_spawn(["asfasf", "fdsdgsdgsdg", "sdgfsdgsdg", "asfpagsdg"]));
    Util.cprint("asf", Bold, Black, WhiteBack);
  };
}
