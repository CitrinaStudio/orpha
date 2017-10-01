package;

import Random;

class Header{
    //public inline var MAGIC_MBOSS_SPELLS

    public static inline function MAGIC_SPELLS(): Map<String, Map<String,Dynamic>>{
      return [
        "Iceblast" => [
          "damage_bonus" => 4, "spell_cost" => 5,
          "min_player_coeff" => .0, "category" => "Ice"
        ],

        "Fireball" => [
          "damage_bonus" => 5, "spell_cost" => 6,
          "min_player_coeff" => .0, "category" => "Fire"
        ],

        "Waterpillar" => [
          "damage_bonus" => 6, "spell_cost" => 7,
          "min_player_coeff" => .0, "category" => "Water"
         ],
        "Ironfist" => [
          "damage_bonus" => 7, "spell_cost" => 8,
          "min_player_coeff" => .0, "category" => "Iron"
        ]
      ];
    };
}
