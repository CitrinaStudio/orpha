package inside;

import Header;
import Random;
import Sys;
import ANSI;

import inside.*;

class Map{
  public static function get_map_point(map_arr:Array<String>, coor:Array<Int>) : String {
    return map_arr[coor[1]].charAt(coor[0]);
  };
  public static function get_player_spawn(map_arr:Array<String>) : Array<Int> {
    return [0, 0];
  };
  static function main() : Void {
    Util.cprint("asf", Bold, Black, WhiteBack);
  };
}
