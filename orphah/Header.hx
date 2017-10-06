package;

import Random;

import markov.namegen.Model;

class Header{
    //public inline var MAGIC_MBOSS_SPELLS
    public static inline function keys(map_var:Map<String,Dynamic>) : Array<String> {
        var iter_keys: Iterator<String> = map_var.keys();
        var keys: Array<String> = [];
        for (key in iter_keys){
          keys.push(key);
        };
        return keys;
    };

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
    public static inline function CONVENTIONAL_NOTATIONAL_WITHOUT_DETAIL(): Array<String>{
      return keys(CONVENTIONAL_NOTATIONAL_TABLES_NAMES());
    };
    public static inline function POTENTIAL_ENEMY_STATS(): Map<String, Map<String, Int>> {
      return [
        'Ork'=> [
          'hp'=> 19,
          'mp'=> 6
        ],
        'Gnom'=> [
          'hp'=> 17,
          'mp'=> 9
        ]
      ];
    };
    public static inline function MAGIC_MBOSS_SPELLS(): Array<String> {
      return ['Meteor', 'Ice walk'];
    };
    public static inline function BODY_PARTS(): Array<String> {
      return ['leg', 'had', 'hand', 'neck', 'knee'];
    };
    public static inline function POTENTIAL_MBOSS_PREFIX_STATS(): Map<String, Array<Int>> {
      return[
        "Ice"=> [4, 7],
        "Fire"=> [5, 10],
        "Water" => [4, 8],
        "Magma" => [6, 11],
        "Earth" => [4, 9]
      ];
    };
    public static inline function CONVENTIONAL_NOTATIONAL_VILLAGE(): Array<String> {
      return ["H", "S", " "];
    };
    public static inline function DEFAULT_PLAYER_X(): Int{
      return 0;
    };
    public static inline function DEFAULT_PLAYER_Y(): Int{
      return 0;
    };
    public static inline function DEFAULT_WEIGHT_MAP(): Int{
      return 50;
    };
    public static inline function DEFAULT_HEIGHT_MAP(): Int{
      return 20;
    };
    public static inline function DEFAULT_WEIGHT_MAP_VILLAGE(): Int{
      return 20;
    };
    public static inline function DEFAULT_HEIGHT_MAP_VILLAGE(): Int{
      return 10;
    };
    public static inline function DEFAULT_QUANTITY_MAP_STRING(): Int{
      return DEFAULT_HEIGHT_MAP();
    };
    public static inline function DEFAULT_QUANTITY_MAP_STRING_VILLAGE(): Int{
      return DEFAULT_HEIGHT_MAP_VILLAGE();
    };
    public static inline function DUNGEON_PREFIX(): Array<String>{
      return ['Dark', 'Little', 'Singular', 'Blood', 'Frozen', 'Ice', 'Fire', 'Dead', 'Vampire', 'Wolf', 'Fucking', 'Gay'];
    };
    public static inline function DUNGEON_TYPE(): Array<String>{
      return [' castle', ' gates', ' house', ' house'];
    };
    public static inline function DUNGEON_SUFFIX(): Array<String>{
      return ['Ilya', 'Dionis', 'Leena', 'Lanaya', 'Raxar', 'Lisa Su'];
    };
}

typedef Coordinate = {
    x: Int, y: Int
};

typedef Abilities = {
  pWis : Int, pStr : Int, pInt : Int, pDex : Int, pCon : Int, pCha : Int
};

typedef Params = {
  pName: String, ?pAge: Int,
  ?pClass: String, pHp: Int, pMp: Int,
  ?Ability: Abilities,  ?pCoordinate: Coordinate};
