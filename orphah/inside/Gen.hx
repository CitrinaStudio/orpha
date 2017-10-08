package inside;

import haxe.crypto.*;
import Sys;
import markov.namegen.NameGenerator;

class Gen {
  public static function gen_md5_hash(params:String): String {
    return Md5.encode(params);
  };
  public  static function gen_name(size:String): String {
    return '0';
  };

  public static function main():Void {
    Sys.println(gen_md5_hash('Lol'));
    Sys.println(NameGenerator);
  };
}
