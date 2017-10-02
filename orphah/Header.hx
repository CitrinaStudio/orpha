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
    public static inline function MAPS_PATH(): String {
      return "maps/%s";
    };
    public static inline function PLAYER_CLASSES(): Array<String> {
      return ["Mage"];
    };
    public static inline function QUANTITY_PLAYER_CLASSES(): Int {
      return PLAYER_CLASSES().length;
    };
    public static inline function DEFAULT_MP(): Int {
      return 10;
    };
    public static inline function DEFAULT_HP(): Int{
      return 10;
    };
    public static inline function CLASSES_BONUSES(): Map<String, Map<String, Int>> {
      return [
        "Warrior"=> [
          'hp'=> 5, 'mp'=> 0,
          'str'=> 5, 'dex'=> 1,
          'con'=> 1, 'inte'=> 1,
          'wis'=> 1, 'cha'=> 1
        ],
        "Roge"=> [
          'hp'=> 4, 'mp'=> 1,
          'str'=> 1, 'dex'=> 5,
          'con'=> 1, 'inte'=> 1,
          'wis'=> 1, 'cha'=> 1
      ],
      "Mage"=> [
          'hp'=> 2, 'mp'=> 5,
          'str'=> 1, 'dex'=> 1,
          'con'=> 1, 'inte'=> 1,
          'wis'=> 5, 'cha'=> 1
      ]
    ];
  };
    public static inline function START_INVENTORY(): Map<String, Map<String, String>> {
      return [
        "Warrior"=> [
          'inventory'=> 'sword',

        ],
        "Roge"=> [
          'inventory'=> 'blade',
          
        ],
        "Mage"=> [
          'inventory'=> 'scepter',
          
        ]
      ];
    };
    public static inline function CLASSES_ABILITY(): Map<String, Map<String, Int>> {
      return [
        [
        "Warrior"=> [
          'str'=> 7, 'dex'=> 3,
          'con'=> 6, 'inte'=> 2,
          'wis'=> 2, 'cha'=> 4
        ],
        "Roge"=> [
          'str'=> 6, 'dex'=> 5,
          'con'=> 4, 'inte'=> 2,
          'wis'=> 2, 'cha'=> 3
      ],
      "Mage"=> [
          'str'=> 4, 'dex'=> 5,
          'con'=> 4, 'inte'=> 3,
          'wis'=> 3, 'cha'=> 3
      ]
    
      ]
    ];
  };
    public static inline function CONVENTIONAL_NOTATIONAL(): Map<String, String> {
      return [
        "H"=>"Home",
        "S"=> "Shop",
        "B"=> "Bar",
        "M"=> "Mountain",
        "C"=> "Cave",
        "f"=> "Field",
        "F"=> "Forest",
        "R"=> "River",
        "b"=> "little Bridge",
        "p"=> "Player spawn",
        " "=> "***Wind***",
        "V"=> "Village",
        "Ć"=> "Temple",
        "p"=> "Player Spawn",
        "E"=> "Enemy",
        "#"=> "Wall"
      ];
    };
    public static inline function CONVENTIONAL_NOTATIONAL_ENTER_POINT(): Array<String> {
      return ["V"];
    };
    public static inline function NAME_MAPS_FILES(): Map<String, String> {
      return [
        'V'=> 'village',
        'E'=> 'enemy'
      ];
    };
    public static inline function CONVENTIONAL_NOTATIONAL_TABLES_NAMES(): Map<String, String> {
      return [
        "H"=> "homes",
        "S"=> "shops",
        "B"=> "bars",
        "M"=> "mountains",
        "R"=> "rivers",
        "V"=> "villages",
        "E"=> "enemyes",
        "D"=> "dungeons",
        "Ć"=> "temples"
      ];
    };
    public static inline function POTENTIAL_ENEMY_STATS(): Map<String Map<String, Int>> {
      return [
        'Ork'=> [
          'hp'=> 19,
          'mp'=> 6
        ],
        'Gnom'=> [
          'hp'=> 17,
          'mp'=> 9
        ];
      ];
    };
    public static inline function MAGIC_MBOSS_SPELLS(): Array<String> {
      return ['Meteor', 'Ice walk'];
    };
    public static inline function BODY_PARTS(): Array<String> {
      return ['leg', 'had', 'hand', 'neck', 'knee'];
    };
    public static inline function POTENTIAL_MBOSS_PREFIX_STATS(): Map<String, Int> {
      return[
        "Ice"=> [4, 7],
        "Fire"=> []
      ]
    }

}
