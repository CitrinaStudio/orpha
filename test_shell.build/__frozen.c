// This provides the frozen (compiled bytecode) files that are included if
// any.
#include <Python.h>

#include "nuitka/constants_blob.h"

// Blob from which modules are unstreamed.
#define stream_data constant_bin

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    ssize_t start;
    int size;
};

void copyFrozenModulesTo( struct _frozen *destination )
{
    struct frozen_desc frozen_modules[] = {
        { "_bootlocale", 8740411, 968 },
        { "_collections_abc", 8741379, 28831 },
        { "_compression", 8770210, 4092 },
        { "_weakrefset", 8774302, 7816 },
        { "abc", 8782118, 7476 },
        { "ast", 8789594, 11692 },
        { "base64", 8801286, 17123 },
        { "bz2", 8818409, 11270 },
        { "codecs", 8829679, 33906 },
        { "collections", 8863585, -45865 },
        { "collections.abc", 8741379, 28831 },
        { "copyreg", 8909450, 4179 },
        { "dis", 8913629, 14169 },
        { "encodings", 8927798, -3918 },
        { "encodings.aliases", 8931716, 6262 },
        { "encodings.ascii", 8937978, 1850 },
        { "encodings.base64_codec", 8939828, 2389 },
        { "encodings.big5", 8942217, 1410 },
        { "encodings.big5hkscs", 8943627, 1420 },
        { "encodings.bz2_codec", 8945047, 3251 },
        { "encodings.charmap", 8948298, 2903 },
        { "encodings.cp037", 8951201, 2395 },
        { "encodings.cp1006", 8953596, 2471 },
        { "encodings.cp1026", 8956067, 2399 },
        { "encodings.cp1125", 8958466, 8092 },
        { "encodings.cp1140", 8966558, 2385 },
        { "encodings.cp1250", 8968943, 2422 },
        { "encodings.cp1251", 8971365, 2419 },
        { "encodings.cp1252", 8973784, 2422 },
        { "encodings.cp1253", 8976206, 2435 },
        { "encodings.cp1254", 8978641, 2424 },
        { "encodings.cp1255", 8981065, 2443 },
        { "encodings.cp1256", 8983508, 2421 },
        { "encodings.cp1257", 8985929, 2429 },
        { "encodings.cp1258", 8988358, 2427 },
        { "encodings.cp273", 8990785, 2381 },
        { "encodings.cp424", 8993166, 2425 },
        { "encodings.cp437", 8995591, 7809 },
        { "encodings.cp500", 9003400, 2395 },
        { "encodings.cp720", 9005795, 2492 },
        { "encodings.cp737", 9008287, 8131 },
        { "encodings.cp775", 9016418, 7839 },
        { "encodings.cp850", 9024257, 7470 },
        { "encodings.cp852", 9031727, 7847 },
        { "encodings.cp855", 9039574, 8100 },
        { "encodings.cp856", 9047674, 2457 },
        { "encodings.cp857", 9050131, 7452 },
        { "encodings.cp858", 9057583, 7440 },
        { "encodings.cp860", 9065023, 7788 },
        { "encodings.cp861", 9072811, 7803 },
        { "encodings.cp862", 9080614, 7992 },
        { "encodings.cp863", 9088606, 7803 },
        { "encodings.cp864", 9096409, 7949 },
        { "encodings.cp865", 9104358, 7803 },
        { "encodings.cp866", 9112161, 8136 },
        { "encodings.cp869", 9120297, 7829 },
        { "encodings.cp874", 9128126, 2523 },
        { "encodings.cp875", 9130649, 2392 },
        { "encodings.cp932", 9133041, 1412 },
        { "encodings.cp949", 9134453, 1412 },
        { "encodings.cp950", 9135865, 1412 },
        { "encodings.euc_jis_2004", 9137277, 1426 },
        { "encodings.euc_jisx0213", 9138703, 1426 },
        { "encodings.euc_jp", 9140129, 1414 },
        { "encodings.euc_kr", 9141543, 1414 },
        { "encodings.gb18030", 9142957, 1416 },
        { "encodings.gb2312", 9144373, 1414 },
        { "encodings.gbk", 9145787, 1408 },
        { "encodings.hex_codec", 9147195, 2376 },
        { "encodings.hp_roman8", 9149571, 2596 },
        { "encodings.hz", 9152167, 1406 },
        { "encodings.idna", 9153573, 5753 },
        { "encodings.iso2022_jp", 9159326, 1427 },
        { "encodings.iso2022_jp_1", 9160753, 1431 },
        { "encodings.iso2022_jp_2", 9162184, 1431 },
        { "encodings.iso2022_jp_2004", 9163615, 1437 },
        { "encodings.iso2022_jp_3", 9165052, 1431 },
        { "encodings.iso2022_jp_ext", 9166483, 1435 },
        { "encodings.iso2022_kr", 9167918, 1427 },
        { "encodings.iso8859_1", 9169345, 2394 },
        { "encodings.iso8859_10", 9171739, 2399 },
        { "encodings.iso8859_11", 9174138, 2493 },
        { "encodings.iso8859_13", 9176631, 2402 },
        { "encodings.iso8859_14", 9179033, 2420 },
        { "encodings.iso8859_15", 9181453, 2399 },
        { "encodings.iso8859_16", 9183852, 2401 },
        { "encodings.iso8859_2", 9186253, 2394 },
        { "encodings.iso8859_3", 9188647, 2401 },
        { "encodings.iso8859_4", 9191048, 2394 },
        { "encodings.iso8859_5", 9193442, 2395 },
        { "encodings.iso8859_6", 9195837, 2439 },
        { "encodings.iso8859_7", 9198276, 2402 },
        { "encodings.iso8859_8", 9200678, 2433 },
        { "encodings.iso8859_9", 9203111, 2394 },
        { "encodings.johab", 9205505, 1412 },
        { "encodings.koi8_r", 9206917, 2446 },
        { "encodings.koi8_t", 9209363, 2357 },
        { "encodings.koi8_u", 9211720, 2432 },
        { "encodings.kz1048", 9214152, 2409 },
        { "encodings.latin_1", 9216561, 1862 },
        { "encodings.mac_arabic", 9218423, 7703 },
        { "encodings.mac_centeuro", 9226126, 2433 },
        { "encodings.mac_croatian", 9228559, 2441 },
        { "encodings.mac_cyrillic", 9231000, 2431 },
        { "encodings.mac_farsi", 9233431, 2375 },
        { "encodings.mac_greek", 9235806, 2415 },
        { "encodings.mac_iceland", 9238221, 2434 },
        { "encodings.mac_latin2", 9240655, 2575 },
        { "encodings.mac_roman", 9243230, 2432 },
        { "encodings.mac_romanian", 9245662, 2442 },
        { "encodings.mac_turkish", 9248104, 2435 },
        { "encodings.palmos", 9250539, 2422 },
        { "encodings.ptcp154", 9252961, 2516 },
        { "encodings.punycode", 9255477, 6433 },
        { "encodings.quopri_codec", 9261910, 2409 },
        { "encodings.raw_unicode_escape", 9264319, 1735 },
        { "encodings.rot_13", 9266054, 2967 },
        { "encodings.shift_jis", 9269021, 1420 },
        { "encodings.shift_jis_2004", 9270441, 1430 },
        { "encodings.shift_jisx0213", 9271871, 1430 },
        { "encodings.tis_620", 9273301, 2484 },
        { "encodings.undefined", 9275785, 2129 },
        { "encodings.unicode_escape", 9277914, 1715 },
        { "encodings.unicode_internal", 9279629, 1725 },
        { "encodings.utf_16", 9281354, 4799 },
        { "encodings.utf_16_be", 9286153, 1600 },
        { "encodings.utf_16_le", 9287753, 1600 },
        { "encodings.utf_32", 9289353, 4692 },
        { "encodings.utf_32_be", 9294045, 1493 },
        { "encodings.utf_32_le", 9295538, 1493 },
        { "encodings.utf_7", 9297031, 1521 },
        { "encodings.utf_8", 9298552, 1580 },
        { "encodings.utf_8_sig", 9300132, 4497 },
        { "encodings.uu_codec", 9304629, 3193 },
        { "encodings.zlib_codec", 9307822, 3089 },
        { "enum", 9310911, 23395 },
        { "functools", 9334306, 23915 },
        { "genericpath", 9358221, 3714 },
        { "heapq", 9361935, 14280 },
        { "importlib", 9376215, -3588 },
        { "importlib._bootstrap", 9379803, 29116 },
        { "importlib._bootstrap_external", 9408919, 38889 },
        { "importlib.machinery", 9447808, 938 },
        { "inspect", 9448746, 78954 },
        { "io", 9527700, 3375 },
        { "keyword", 9531075, 1753 },
        { "linecache", 9532828, 3766 },
        { "locale", 9536594, 33003 },
        { "opcode", 9569597, 5401 },
        { "operator", 9574998, 13901 },
        { "os", 9588899, 29595 },
        { "posixpath", 9618494, 10377 },
        { "quopri", 9628871, 5761 },
        { "re", 9634632, 14046 },
        { "reprlib", 9648678, 5388 },
        { "sre_compile", 9654066, 10266 },
        { "sre_constants", 9664332, 5960 },
        { "sre_parse", 9670292, 20346 },
        { "stat", 9690638, 3839 },
        { "stringprep", 9694477, 10018 },
        { "struct", 9704495, 300 },
        { "threading", 9704795, 37244 },
        { "token", 9742039, 3308 },
        { "tokenize", 9745347, 18531 },
        { "traceback", 9763878, 19508 },
        { "types", 9783386, 8189 },
        { "warnings", 9791575, 13246 },
        { "weakref", 9804821, 19131 },
        { NULL, 0, 0 }
    };

    struct frozen_desc *current = frozen_modules;

    for(;;)
    {
        destination->name = (char *)current->name;
        destination->code = (unsigned char *)&constant_bin[ current->start ];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}
