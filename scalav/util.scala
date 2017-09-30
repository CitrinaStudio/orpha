import sys.process._
import scala.util.Properties._

object Util{
    def clear() = { /** Очищение командной строки */

        try{
            "cls".!
        }catch{
            case ios: java.io.IOException => "clear".!
        }
    }
}