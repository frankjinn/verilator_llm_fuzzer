/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_VERILOG_PRETMP_H_INCLUDED
# define YY_YY_VERILOG_PRETMP_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    yaFLOATNUM = 258,              /* "FLOATING-POINT NUMBER"  */
    yaID__ETC = 259,               /* "IDENTIFIER"  */
    yaID__CC = 260,                /* "IDENTIFIER-::"  */
    yaID__LEX = 261,               /* "IDENTIFIER-in-lex"  */
    yaID__aINST = 262,             /* "IDENTIFIER-for-instance"  */
    yaID__aTYPE = 263,             /* "IDENTIFIER-for-type"  */
    yaINTNUM = 264,                /* "INTEGER NUMBER"  */
    yaTIMENUM = 265,               /* "TIME NUMBER"  */
    yaSTRING = 266,                /* "STRING"  */
    yaSTRING__IGNORE = 267,        /* "STRING-ignored"  */
    yaEDGEDESC = 268,              /* "EDGE DESCRIPTOR"  */
    yaTIMINGSPEC = 269,            /* "TIMING SPEC ELEMENT"  */
    ygenSTRENGTH = 270,            /* "STRENGTH keyword (strong1/etc)"  */
    yaTABLE_FIELD = 271,           /* "UDP table field"  */
    yaTABLE_LRSEP = 272,           /* ":"  */
    yaTABLE_LINEEND = 273,         /* "UDP table line end"  */
    yaSCCTOR = 274,                /* "`systemc_ctor block"  */
    yaSCDTOR = 275,                /* "`systemc_dtor block"  */
    yaSCHDR = 276,                 /* "`systemc_header block"  */
    yaSCHDRP = 277,                /* "`systemc_header_post block"  */
    yaSCIMP = 278,                 /* "`systemc_implementation block"  */
    yaSCIMPH = 279,                /* "`systemc_imp_header block"  */
    yaSCINT = 280,                 /* "`systemc_interface block"  */
    yVLT_CLOCKER = 281,            /* "clocker"  */
    yVLT_CLOCK_ENABLE = 282,       /* "clock_enable"  */
    yVLT_COVERAGE_BLOCK_OFF = 283, /* "coverage_block_off"  */
    yVLT_COVERAGE_OFF = 284,       /* "coverage_off"  */
    yVLT_COVERAGE_ON = 285,        /* "coverage_on"  */
    yVLT_FORCEABLE = 286,          /* "forceable"  */
    yVLT_FULL_CASE = 287,          /* "full_case"  */
    yVLT_HIER_BLOCK = 288,         /* "hier_block"  */
    yVLT_HIER_PARAMS = 289,        /* "hier_params"  */
    yVLT_HIER_WORKERS = 290,       /* "hier_workers"  */
    yVLT_INLINE = 291,             /* "inline"  */
    yVLT_ISOLATE_ASSIGNMENTS = 292, /* "isolate_assignments"  */
    yVLT_LINT_OFF = 293,           /* "lint_off"  */
    yVLT_LINT_ON = 294,            /* "lint_on"  */
    yVLT_NO_CLOCKER = 295,         /* "no_clocker"  */
    yVLT_NO_INLINE = 296,          /* "no_inline"  */
    yVLT_PARALLEL_CASE = 297,      /* "parallel_case"  */
    yVLT_PROFILE_DATA = 298,       /* "profile_data"  */
    yVLT_PUBLIC = 299,             /* "public"  */
    yVLT_PUBLIC_FLAT = 300,        /* "public_flat"  */
    yVLT_PUBLIC_FLAT_RD = 301,     /* "public_flat_rd"  */
    yVLT_PUBLIC_FLAT_RW = 302,     /* "public_flat_rw"  */
    yVLT_PUBLIC_MODULE = 303,      /* "public_module"  */
    yVLT_SC_BV = 304,              /* "sc_bv"  */
    yVLT_SFORMAT = 305,            /* "sformat"  */
    yVLT_SPLIT_VAR = 306,          /* "split_var"  */
    yVLT_TIMING_OFF = 307,         /* "timing_off"  */
    yVLT_TIMING_ON = 308,          /* "timing_on"  */
    yVLT_TRACING_OFF = 309,        /* "tracing_off"  */
    yVLT_TRACING_ON = 310,         /* "tracing_on"  */
    yVLT_D_BLOCK = 311,            /* "--block"  */
    yVLT_D_CONTENTS = 312,         /* "--contents"  */
    yVLT_D_COST = 313,             /* "--cost"  */
    yVLT_D_FILE = 314,             /* "--file"  */
    yVLT_D_FUNCTION = 315,         /* "--function"  */
    yVLT_D_HIER_DPI = 316,         /* "--hier-dpi"  */
    yVLT_D_LEVELS = 317,           /* "--levels"  */
    yVLT_D_LINES = 318,            /* "--lines"  */
    yVLT_D_MATCH = 319,            /* "--match"  */
    yVLT_D_MODEL = 320,            /* "--model"  */
    yVLT_D_MODULE = 321,           /* "--module"  */
    yVLT_D_MTASK = 322,            /* "--mtask"  */
    yVLT_D_RULE = 323,             /* "--rule"  */
    yVLT_D_SCOPE = 324,            /* "--scope"  */
    yVLT_D_TASK = 325,             /* "--task"  */
    yVLT_D_VAR = 326,              /* "--var"  */
    yVLT_D_WORKERS = 327,          /* "--workers"  */
    yaD_PLI = 328,                 /* "${pli-system}"  */
    yaT_NOUNCONNECTED = 329,       /* "`nounconnecteddrive"  */
    yaT_RESETALL = 330,            /* "`resetall"  */
    yaT_UNCONNECTED_PULL0 = 331,   /* "`unconnected_drive pull0"  */
    yaT_UNCONNECTED_PULL1 = 332,   /* "`unconnected_drive pull1"  */
    y1STEP = 333,                  /* "1step"  */
    yACCEPT_ON = 334,              /* "accept_on"  */
    yALIAS = 335,                  /* "alias"  */
    yALWAYS = 336,                 /* "always"  */
    yALWAYS_COMB = 337,            /* "always_comb"  */
    yALWAYS_FF = 338,              /* "always_ff"  */
    yALWAYS_LATCH = 339,           /* "always_latch"  */
    yAND = 340,                    /* "and"  */
    yASSERT = 341,                 /* "assert"  */
    yASSIGN = 342,                 /* "assign"  */
    yASSUME = 343,                 /* "assume"  */
    yAUTOMATIC = 344,              /* "automatic"  */
    yBEFORE = 345,                 /* "before"  */
    yBEGIN = 346,                  /* "begin"  */
    yBIND = 347,                   /* "bind"  */
    yBINS = 348,                   /* "bins"  */
    yBINSOF = 349,                 /* "binsof"  */
    yBIT = 350,                    /* "bit"  */
    yBREAK = 351,                  /* "break"  */
    yBUF = 352,                    /* "buf"  */
    yBUFIF0 = 353,                 /* "bufif0"  */
    yBUFIF1 = 354,                 /* "bufif1"  */
    yBYTE = 355,                   /* "byte"  */
    yCASE = 356,                   /* "case"  */
    yCASEX = 357,                  /* "casex"  */
    yCASEZ = 358,                  /* "casez"  */
    yCHANDLE = 359,                /* "chandle"  */
    yCHECKER = 360,                /* "checker"  */
    yCLASS = 361,                  /* "class"  */
    yCLOCKING = 362,               /* "clocking"  */
    yCMOS = 363,                   /* "cmos"  */
    yCONSTRAINT = 364,             /* "constraint"  */
    yCONST__ETC = 365,             /* "const"  */
    yCONST__LEX = 366,             /* "const-in-lex"  */
    yCONST__REF = 367,             /* "const-then-ref"  */
    yCONTEXT = 368,                /* "context"  */
    yCONTINUE = 369,               /* "continue"  */
    yCOVER = 370,                  /* "cover"  */
    yCOVERGROUP = 371,             /* "covergroup"  */
    yCOVERPOINT = 372,             /* "coverpoint"  */
    yCROSS = 373,                  /* "cross"  */
    yDEASSIGN = 374,               /* "deassign"  */
    yDEFAULT = 375,                /* "default"  */
    yDEFPARAM = 376,               /* "defparam"  */
    yDISABLE = 377,                /* "disable"  */
    yDIST = 378,                   /* "dist"  */
    yDO = 379,                     /* "do"  */
    yEDGE = 380,                   /* "edge"  */
    yELSE = 381,                   /* "else"  */
    yEND = 382,                    /* "end"  */
    yENDCASE = 383,                /* "endcase"  */
    yENDCHECKER = 384,             /* "endchecker"  */
    yENDCLASS = 385,               /* "endclass"  */
    yENDCLOCKING = 386,            /* "endclocking"  */
    yENDFUNCTION = 387,            /* "endfunction"  */
    yENDGENERATE = 388,            /* "endgenerate"  */
    yENDGROUP = 389,               /* "endgroup"  */
    yENDINTERFACE = 390,           /* "endinterface"  */
    yENDMODULE = 391,              /* "endmodule"  */
    yENDPACKAGE = 392,             /* "endpackage"  */
    yENDPRIMITIVE = 393,           /* "endprimitive"  */
    yENDPROGRAM = 394,             /* "endprogram"  */
    yENDPROPERTY = 395,            /* "endproperty"  */
    yENDSEQUENCE = 396,            /* "endsequence"  */
    yENDSPECIFY = 397,             /* "endspecify"  */
    yENDTABLE = 398,               /* "endtable"  */
    yENDTASK = 399,                /* "endtask"  */
    yENUM = 400,                   /* "enum"  */
    yEVENT = 401,                  /* "event"  */
    yEVENTUALLY = 402,             /* "eventually"  */
    yEXPECT = 403,                 /* "expect"  */
    yEXPORT = 404,                 /* "export"  */
    yEXTENDS = 405,                /* "extends"  */
    yEXTERN = 406,                 /* "extern"  */
    yFINAL = 407,                  /* "final"  */
    yFIRST_MATCH = 408,            /* "first_match"  */
    yFOR = 409,                    /* "for"  */
    yFORCE = 410,                  /* "force"  */
    yFOREACH = 411,                /* "foreach"  */
    yFOREVER = 412,                /* "forever"  */
    yFORK = 413,                   /* "fork"  */
    yFORKJOIN = 414,               /* "forkjoin"  */
    yFUNCTION = 415,               /* "function"  */
    yGENERATE = 416,               /* "generate"  */
    yGENVAR = 417,                 /* "genvar"  */
    yGLOBAL__CLOCKING = 418,       /* "global-then-clocking"  */
    yGLOBAL__ETC = 419,            /* "global"  */
    yGLOBAL__LEX = 420,            /* "global-in-lex"  */
    yHIGHZ0 = 421,                 /* "highz0"  */
    yHIGHZ1 = 422,                 /* "highz1"  */
    yIF = 423,                     /* "if"  */
    yIFF = 424,                    /* "iff"  */
    yIGNORE_BINS = 425,            /* "ignore_bins"  */
    yILLEGAL_BINS = 426,           /* "illegal_bins"  */
    yIMPLEMENTS = 427,             /* "implements"  */
    yIMPLIES = 428,                /* "implies"  */
    yIMPORT = 429,                 /* "import"  */
    yINITIAL = 430,                /* "initial"  */
    yINOUT = 431,                  /* "inout"  */
    yINPUT = 432,                  /* "input"  */
    yINSIDE = 433,                 /* "inside"  */
    yINT = 434,                    /* "int"  */
    yINTEGER = 435,                /* "integer"  */
    yINTERCONNECT = 436,           /* "interconnect"  */
    yINTERFACE = 437,              /* "interface"  */
    yINTERSECT = 438,              /* "intersect"  */
    yJOIN = 439,                   /* "join"  */
    yJOIN_ANY = 440,               /* "join_any"  */
    yJOIN_NONE = 441,              /* "join_none"  */
    yLET = 442,                    /* "let"  */
    yLOCALPARAM = 443,             /* "localparam"  */
    yLOCAL__COLONCOLON = 444,      /* "local-then-::"  */
    yLOCAL__ETC = 445,             /* "local"  */
    yLOCAL__LEX = 446,             /* "local-in-lex"  */
    yLOGIC = 447,                  /* "logic"  */
    yLONGINT = 448,                /* "longint"  */
    yMATCHES = 449,                /* "matches"  */
    yMODPORT = 450,                /* "modport"  */
    yMODULE = 451,                 /* "module"  */
    yNAND = 452,                   /* "nand"  */
    yNEGEDGE = 453,                /* "negedge"  */
    yNETTYPE = 454,                /* "nettype"  */
    yNEW__ETC = 455,               /* "new"  */
    yNEW__LEX = 456,               /* "new-in-lex"  */
    yNEW__PAREN = 457,             /* "new-then-paren"  */
    yNEXTTIME = 458,               /* "nexttime"  */
    yNMOS = 459,                   /* "nmos"  */
    yNOR = 460,                    /* "nor"  */
    yNOT = 461,                    /* "not"  */
    yNOTIF0 = 462,                 /* "notif0"  */
    yNOTIF1 = 463,                 /* "notif1"  */
    yNULL = 464,                   /* "null"  */
    yOR = 465,                     /* "or"  */
    yOUTPUT = 466,                 /* "output"  */
    yPACKAGE = 467,                /* "package"  */
    yPACKED = 468,                 /* "packed"  */
    yPARAMETER = 469,              /* "parameter"  */
    yPMOS = 470,                   /* "pmos"  */
    yPOSEDGE = 471,                /* "posedge"  */
    yPRIMITIVE = 472,              /* "primitive"  */
    yPRIORITY = 473,               /* "priority"  */
    yPROGRAM = 474,                /* "program"  */
    yPROPERTY = 475,               /* "property"  */
    yPROTECTED = 476,              /* "protected"  */
    yPULL0 = 477,                  /* "pull0"  */
    yPULL1 = 478,                  /* "pull1"  */
    yPULLDOWN = 479,               /* "pulldown"  */
    yPULLUP = 480,                 /* "pullup"  */
    yPURE = 481,                   /* "pure"  */
    yRAND = 482,                   /* "rand"  */
    yRANDC = 483,                  /* "randc"  */
    yRANDCASE = 484,               /* "randcase"  */
    yRANDOMIZE = 485,              /* "randomize"  */
    yRANDSEQUENCE = 486,           /* "randsequence"  */
    yRCMOS = 487,                  /* "rcmos"  */
    yREAL = 488,                   /* "real"  */
    yREALTIME = 489,               /* "realtime"  */
    yREF = 490,                    /* "ref"  */
    yREG = 491,                    /* "reg"  */
    yREJECT_ON = 492,              /* "reject_on"  */
    yRELEASE = 493,                /* "release"  */
    yREPEAT = 494,                 /* "repeat"  */
    yRESTRICT = 495,               /* "restrict"  */
    yRETURN = 496,                 /* "return"  */
    yRNMOS = 497,                  /* "rnmos"  */
    yRPMOS = 498,                  /* "rpmos"  */
    yRTRAN = 499,                  /* "rtran"  */
    yRTRANIF0 = 500,               /* "rtranif0"  */
    yRTRANIF1 = 501,               /* "rtranif1"  */
    ySCALARED = 502,               /* "scalared"  */
    ySEQUENCE = 503,               /* "sequence"  */
    ySHORTINT = 504,               /* "shortint"  */
    ySHORTREAL = 505,              /* "shortreal"  */
    ySIGNED = 506,                 /* "signed"  */
    ySOFT = 507,                   /* "soft"  */
    ySOLVE = 508,                  /* "solve"  */
    ySPECIFY = 509,                /* "specify"  */
    ySPECPARAM = 510,              /* "specparam"  */
    ySTATIC__CONSTRAINT = 511,     /* "static-then-constraint"  */
    ySTATIC__ETC = 512,            /* "static"  */
    ySTATIC__LEX = 513,            /* "static-in-lex"  */
    ySTRING = 514,                 /* "string"  */
    ySTRONG = 515,                 /* "strong"  */
    ySTRONG0 = 516,                /* "strong0"  */
    ySTRONG1 = 517,                /* "strong1"  */
    ySTRUCT = 518,                 /* "struct"  */
    ySUPER = 519,                  /* "super"  */
    ySUPPLY0 = 520,                /* "supply0"  */
    ySUPPLY1 = 521,                /* "supply1"  */
    ySYNC_ACCEPT_ON = 522,         /* "sync_accept_on"  */
    ySYNC_REJECT_ON = 523,         /* "sync_reject_on"  */
    yS_ALWAYS = 524,               /* "s_always"  */
    yS_EVENTUALLY = 525,           /* "s_eventually"  */
    yS_NEXTTIME = 526,             /* "s_nexttime"  */
    yS_UNTIL = 527,                /* "s_until"  */
    yS_UNTIL_WITH = 528,           /* "s_until_with"  */
    yTABLE = 529,                  /* "table"  */
    yTAGGED = 530,                 /* "tagged"  */
    yTASK = 531,                   /* "task"  */
    yTHIS = 532,                   /* "this"  */
    yTHROUGHOUT = 533,             /* "throughout"  */
    yTIME = 534,                   /* "time"  */
    yTIMEPRECISION = 535,          /* "timeprecision"  */
    yTIMEUNIT = 536,               /* "timeunit"  */
    yTRAN = 537,                   /* "tran"  */
    yTRANIF0 = 538,                /* "tranif0"  */
    yTRANIF1 = 539,                /* "tranif1"  */
    yTRI = 540,                    /* "tri"  */
    yTRI0 = 541,                   /* "tri0"  */
    yTRI1 = 542,                   /* "tri1"  */
    yTRIAND = 543,                 /* "triand"  */
    yTRIOR = 544,                  /* "trior"  */
    yTRIREG = 545,                 /* "trireg"  */
    yTRUE = 546,                   /* "true"  */
    yTYPEDEF = 547,                /* "typedef"  */
    yTYPE__EQ = 548,               /* "type-then-eqneq"  */
    yTYPE__ETC = 549,              /* "type"  */
    yTYPE__LEX = 550,              /* "type-in-lex"  */
    yUNION = 551,                  /* "union"  */
    yUNIQUE = 552,                 /* "unique"  */
    yUNIQUE0 = 553,                /* "unique0"  */
    yUNSIGNED = 554,               /* "unsigned"  */
    yUNTIL = 555,                  /* "until"  */
    yUNTIL_WITH = 556,             /* "until_with"  */
    yUNTYPED = 557,                /* "untyped"  */
    yVAR = 558,                    /* "var"  */
    yVECTORED = 559,               /* "vectored"  */
    yVIRTUAL__CLASS = 560,         /* "virtual-then-class"  */
    yVIRTUAL__ETC = 561,           /* "virtual"  */
    yVIRTUAL__INTERFACE = 562,     /* "virtual-then-interface"  */
    yVIRTUAL__LEX = 563,           /* "virtual-in-lex"  */
    yVIRTUAL__anyID = 564,         /* "virtual-then-identifier"  */
    yVOID = 565,                   /* "void"  */
    yWAIT = 566,                   /* "wait"  */
    yWAIT_ORDER = 567,             /* "wait_order"  */
    yWAND = 568,                   /* "wand"  */
    yWEAK = 569,                   /* "weak"  */
    yWEAK0 = 570,                  /* "weak0"  */
    yWEAK1 = 571,                  /* "weak1"  */
    yWHILE = 572,                  /* "while"  */
    yWILDCARD = 573,               /* "wildcard"  */
    yWIRE = 574,                   /* "wire"  */
    yWITHIN = 575,                 /* "within"  */
    yWITH__BRA = 576,              /* "with-then-["  */
    yWITH__CUR = 577,              /* "with-then-{"  */
    yWITH__ETC = 578,              /* "with"  */
    yWITH__LEX = 579,              /* "with-in-lex"  */
    yWITH__PAREN = 580,            /* "with-then-("  */
    yWOR = 581,                    /* "wor"  */
    yWREAL = 582,                  /* "wreal"  */
    yXNOR = 583,                   /* "xnor"  */
    yXOR = 584,                    /* "xor"  */
    yD_ACOS = 585,                 /* "$acos"  */
    yD_ACOSH = 586,                /* "$acosh"  */
    yD_ASIN = 587,                 /* "$asin"  */
    yD_ASINH = 588,                /* "$asinh"  */
    yD_ASSERTCTL = 589,            /* "$assertcontrol"  */
    yD_ASSERTKILL = 590,           /* "$assertkill"  */
    yD_ASSERTOFF = 591,            /* "$assertoff"  */
    yD_ASSERTON = 592,             /* "$asserton"  */
    yD_ATAN = 593,                 /* "$atan"  */
    yD_ATAN2 = 594,                /* "$atan2"  */
    yD_ATANH = 595,                /* "$atanh"  */
    yD_BITS = 596,                 /* "$bits"  */
    yD_BITSTOREAL = 597,           /* "$bitstoreal"  */
    yD_BITSTOSHORTREAL = 598,      /* "$bitstoshortreal"  */
    yD_C = 599,                    /* "$c"  */
    yD_CAST = 600,                 /* "$cast"  */
    yD_CEIL = 601,                 /* "$ceil"  */
    yD_CHANGED = 602,              /* "$changed"  */
    yD_CHANGED_GCLK = 603,         /* "$changed_gclk"  */
    yD_CLOG2 = 604,                /* "$clog2"  */
    yD_COS = 605,                  /* "$cos"  */
    yD_COSH = 606,                 /* "$cosh"  */
    yD_COUNTBITS = 607,            /* "$countbits"  */
    yD_COUNTONES = 608,            /* "$countones"  */
    yD_DIMENSIONS = 609,           /* "$dimensions"  */
    yD_DISPLAY = 610,              /* "$display"  */
    yD_DISPLAYB = 611,             /* "$displayb"  */
    yD_DISPLAYH = 612,             /* "$displayh"  */
    yD_DISPLAYO = 613,             /* "$displayo"  */
    yD_DIST_CHI_SQUARE = 614,      /* "$dist_chi_square"  */
    yD_DIST_ERLANG = 615,          /* "$dist_erlang"  */
    yD_DIST_EXPONENTIAL = 616,     /* "$dist_exponential"  */
    yD_DIST_NORMAL = 617,          /* "$dist_normal"  */
    yD_DIST_POISSON = 618,         /* "$dist_poisson"  */
    yD_DIST_T = 619,               /* "$dist_t"  */
    yD_DIST_UNIFORM = 620,         /* "$dist_uniform"  */
    yD_DUMPALL = 621,              /* "$dumpall"  */
    yD_DUMPFILE = 622,             /* "$dumpfile"  */
    yD_DUMPFLUSH = 623,            /* "$dumpflush"  */
    yD_DUMPLIMIT = 624,            /* "$dumplimit"  */
    yD_DUMPOFF = 625,              /* "$dumpoff"  */
    yD_DUMPON = 626,               /* "$dumpon"  */
    yD_DUMPPORTS = 627,            /* "$dumpports"  */
    yD_DUMPVARS = 628,             /* "$dumpvars"  */
    yD_ERROR = 629,                /* "$error"  */
    yD_EXIT = 630,                 /* "$exit"  */
    yD_EXP = 631,                  /* "$exp"  */
    yD_FATAL = 632,                /* "$fatal"  */
    yD_FCLOSE = 633,               /* "$fclose"  */
    yD_FDISPLAY = 634,             /* "$fdisplay"  */
    yD_FDISPLAYB = 635,            /* "$fdisplayb"  */
    yD_FDISPLAYH = 636,            /* "$fdisplayh"  */
    yD_FDISPLAYO = 637,            /* "$fdisplayo"  */
    yD_FELL = 638,                 /* "$fell"  */
    yD_FELL_GCLK = 639,            /* "$fell_gclk"  */
    yD_FEOF = 640,                 /* "$feof"  */
    yD_FERROR = 641,               /* "$ferror"  */
    yD_FFLUSH = 642,               /* "$fflush"  */
    yD_FGETC = 643,                /* "$fgetc"  */
    yD_FGETS = 644,                /* "$fgets"  */
    yD_FINISH = 645,               /* "$finish"  */
    yD_FLOOR = 646,                /* "$floor"  */
    yD_FMONITOR = 647,             /* "$fmonitor"  */
    yD_FMONITORB = 648,            /* "$fmonitorb"  */
    yD_FMONITORH = 649,            /* "$fmonitorh"  */
    yD_FMONITORO = 650,            /* "$fmonitoro"  */
    yD_FOPEN = 651,                /* "$fopen"  */
    yD_FREAD = 652,                /* "$fread"  */
    yD_FREWIND = 653,              /* "$frewind"  */
    yD_FSCANF = 654,               /* "$fscanf"  */
    yD_FSEEK = 655,                /* "$fseek"  */
    yD_FSTROBE = 656,              /* "$fstrobe"  */
    yD_FSTROBEB = 657,             /* "$fstrobeb"  */
    yD_FSTROBEH = 658,             /* "$fstrobeh"  */
    yD_FSTROBEO = 659,             /* "$fstrobeo"  */
    yD_FTELL = 660,                /* "$ftell"  */
    yD_FWRITE = 661,               /* "$fwrite"  */
    yD_FWRITEB = 662,              /* "$fwriteb"  */
    yD_FWRITEH = 663,              /* "$fwriteh"  */
    yD_FWRITEO = 664,              /* "$fwriteo"  */
    yD_GLOBAL_CLOCK = 665,         /* "$global_clock"  */
    yD_HIGH = 666,                 /* "$high"  */
    yD_HYPOT = 667,                /* "$hypot"  */
    yD_INCREMENT = 668,            /* "$increment"  */
    yD_INFERRED_DISABLE = 669,     /* "$inferred_disable"  */
    yD_INFO = 670,                 /* "$info"  */
    yD_ISUNBOUNDED = 671,          /* "$isunbounded"  */
    yD_ISUNKNOWN = 672,            /* "$isunknown"  */
    yD_ITOR = 673,                 /* "$itor"  */
    yD_LEFT = 674,                 /* "$left"  */
    yD_LN = 675,                   /* "$ln"  */
    yD_LOG10 = 676,                /* "$log10"  */
    yD_LOW = 677,                  /* "$low"  */
    yD_MONITOR = 678,              /* "$monitor"  */
    yD_MONITORB = 679,             /* "$monitorb"  */
    yD_MONITORH = 680,             /* "$monitorh"  */
    yD_MONITORO = 681,             /* "$monitoro"  */
    yD_MONITOROFF = 682,           /* "$monitoroff"  */
    yD_MONITORON = 683,            /* "$monitoron"  */
    yD_ONEHOT = 684,               /* "$onehot"  */
    yD_ONEHOT0 = 685,              /* "$onehot0"  */
    yD_PAST = 686,                 /* "$past"  */
    yD_POW = 687,                  /* "$pow"  */
    yD_PRINTTIMESCALE = 688,       /* "$printtimescale"  */
    yD_RANDOM = 689,               /* "$random"  */
    yD_READMEMB = 690,             /* "$readmemb"  */
    yD_READMEMH = 691,             /* "$readmemh"  */
    yD_REALTIME = 692,             /* "$realtime"  */
    yD_REALTOBITS = 693,           /* "$realtobits"  */
    yD_REWIND = 694,               /* "$rewind"  */
    yD_RIGHT = 695,                /* "$right"  */
    yD_ROOT = 696,                 /* "$root"  */
    yD_ROSE = 697,                 /* "$rose"  */
    yD_ROSE_GCLK = 698,            /* "$rose_gclk"  */
    yD_RTOI = 699,                 /* "$rtoi"  */
    yD_SAMPLED = 700,              /* "$sampled"  */
    yD_SETUPHOLD = 701,            /* "$setuphold"  */
    yD_SFORMAT = 702,              /* "$sformat"  */
    yD_SFORMATF = 703,             /* "$sformatf"  */
    yD_SHORTREALTOBITS = 704,      /* "$shortrealtobits"  */
    yD_SIGNED = 705,               /* "$signed"  */
    yD_SIN = 706,                  /* "$sin"  */
    yD_SINH = 707,                 /* "$sinh"  */
    yD_SIZE = 708,                 /* "$size"  */
    yD_SQRT = 709,                 /* "$sqrt"  */
    yD_SSCANF = 710,               /* "$sscanf"  */
    yD_STABLE = 711,               /* "$stable"  */
    yD_STABLE_GCLK = 712,          /* "$stable_gclk"  */
    yD_STACKTRACE = 713,           /* "$stacktrace"  */
    yD_STIME = 714,                /* "$stime"  */
    yD_STOP = 715,                 /* "$stop"  */
    yD_STROBE = 716,               /* "$strobe"  */
    yD_STROBEB = 717,              /* "$strobeb"  */
    yD_STROBEH = 718,              /* "$strobeh"  */
    yD_STROBEO = 719,              /* "$strobeo"  */
    yD_SWRITE = 720,               /* "$swrite"  */
    yD_SWRITEB = 721,              /* "$swriteb"  */
    yD_SWRITEH = 722,              /* "$swriteh"  */
    yD_SWRITEO = 723,              /* "$swriteo"  */
    yD_SYSTEM = 724,               /* "$system"  */
    yD_TAN = 725,                  /* "$tan"  */
    yD_TANH = 726,                 /* "$tanh"  */
    yD_TESTPLUSARGS = 727,         /* "$test$plusargs"  */
    yD_TIME = 728,                 /* "$time"  */
    yD_TIMEFORMAT = 729,           /* "$timeformat"  */
    yD_TIMEPRECISION = 730,        /* "$timeprecision"  */
    yD_TIMEUNIT = 731,             /* "$timeunit"  */
    yD_TYPENAME = 732,             /* "$typename"  */
    yD_UNGETC = 733,               /* "$ungetc"  */
    yD_UNIT = 734,                 /* "$unit"  */
    yD_UNPACKED_DIMENSIONS = 735,  /* "$unpacked_dimensions"  */
    yD_UNSIGNED = 736,             /* "$unsigned"  */
    yD_URANDOM = 737,              /* "$urandom"  */
    yD_URANDOM_RANGE = 738,        /* "$urandom_range"  */
    yD_VALUEPLUSARGS = 739,        /* "$value$plusargs"  */
    yD_WARNING = 740,              /* "$warning"  */
    yD_WRITE = 741,                /* "$write"  */
    yD_WRITEB = 742,               /* "$writeb"  */
    yD_WRITEH = 743,               /* "$writeh"  */
    yD_WRITEMEMB = 744,            /* "$writememb"  */
    yD_WRITEMEMH = 745,            /* "$writememh"  */
    yD_WRITEO = 746,               /* "$writeo"  */
    yVL_CLOCKER = 747,             /* "/\*verilator clocker*\/"  */
    yVL_CLOCK_ENABLE = 748,        /* "/\*verilator clock_enable*\/"  */
    yVL_COVERAGE_BLOCK_OFF = 749,  /* "/\*verilator coverage_block_off*\/"  */
    yVL_FORCEABLE = 750,           /* "/\*verilator forceable*\/"  */
    yVL_FULL_CASE = 751,           /* "/\*verilator full_case*\/"  */
    yVL_HIER_BLOCK = 752,          /* "/\*verilator hier_block*\/"  */
    yVL_INLINE_MODULE = 753,       /* "/\*verilator inline_module*\/"  */
    yVL_ISOLATE_ASSIGNMENTS = 754, /* "/\*verilator isolate_assignments*\/"  */
    yVL_NO_CLOCKER = 755,          /* "/\*verilator no_clocker*\/"  */
    yVL_NO_INLINE_MODULE = 756,    /* "/\*verilator no_inline_module*\/"  */
    yVL_NO_INLINE_TASK = 757,      /* "/\*verilator no_inline_task*\/"  */
    yVL_PARALLEL_CASE = 758,       /* "/\*verilator parallel_case*\/"  */
    yVL_PUBLIC = 759,              /* "/\*verilator public*\/"  */
    yVL_PUBLIC_FLAT = 760,         /* "/\*verilator public_flat*\/"  */
    yVL_PUBLIC_FLAT_ON = 761,      /* "/\*verilator public_flat_on*\/"  */
    yVL_PUBLIC_FLAT_RD = 762,      /* "/\*verilator public_flat_rd*\/"  */
    yVL_PUBLIC_FLAT_RD_ON = 763,   /* "/\*verilator public_flat_rd_on*\/"  */
    yVL_PUBLIC_FLAT_RW = 764,      /* "/\*verilator public_flat_rw*\/"  */
    yVL_PUBLIC_FLAT_RW_ON = 765,   /* "/\*verilator public_flat_rw_on*\/"  */
    yVL_PUBLIC_FLAT_RW_ON_SNS = 766, /* "/\*verilator public_flat_rw_on_sns*\/"  */
    yVL_PUBLIC_ON = 767,           /* "/\*verilator public_on*\/"  */
    yVL_PUBLIC_OFF = 768,          /* "/\*verilator public_off*\/"  */
    yVL_PUBLIC_MODULE = 769,       /* "/\*verilator public_module*\/"  */
    yVL_SC_BV = 770,               /* "/\*verilator sc_bv*\/"  */
    yVL_SFORMAT = 771,             /* "/\*verilator sformat*\/"  */
    yVL_SPLIT_VAR = 772,           /* "/\*verilator split_var*\/"  */
    yVL_TAG = 773,                 /* "/\*verilator tag*\/"  */
    yVL_UNROLL_DISABLE = 774,      /* "/\*verilator unroll_disable*\/"  */
    yVL_UNROLL_FULL = 775,         /* "/\*verilator unroll_full*\/"  */
    yP_TICK = 776,                 /* "'"  */
    yP_TICKBRA = 777,              /* "'{"  */
    yP_OROR = 778,                 /* "||"  */
    yP_ANDAND = 779,               /* "&&"  */
    yP_NOR = 780,                  /* "~|"  */
    yP_XNOR = 781,                 /* "^~"  */
    yP_NAND = 782,                 /* "~&"  */
    yP_EQUAL = 783,                /* "=="  */
    yP_NOTEQUAL = 784,             /* "!="  */
    yP_CASEEQUAL = 785,            /* "==="  */
    yP_CASENOTEQUAL = 786,         /* "!=="  */
    yP_WILDEQUAL = 787,            /* "==?"  */
    yP_WILDNOTEQUAL = 788,         /* "!=?"  */
    yP_GTE = 789,                  /* ">="  */
    yP_LTE = 790,                  /* "<="  */
    yP_LTE__IGNORE = 791,          /* "<=-ignored"  */
    yP_SLEFT = 792,                /* "<<"  */
    yP_SRIGHT = 793,               /* ">>"  */
    yP_SSRIGHT = 794,              /* ">>>"  */
    yP_POW = 795,                  /* "**"  */
    yP_COLON__BEGIN = 796,         /* ":-begin"  */
    yP_COLON__FORK = 797,          /* ":-fork"  */
    yP_PAR__IGNORE = 798,          /* "(-ignored"  */
    yP_PAR__STRENGTH = 799,        /* "(-for-strength"  */
    yP_LTMINUSGT = 800,            /* "<->"  */
    yP_PLUSCOLON = 801,            /* "+:"  */
    yP_MINUSCOLON = 802,           /* "-:"  */
    yP_MINUSGT = 803,              /* "->"  */
    yP_MINUSGTGT = 804,            /* "->>"  */
    yP_EQGT = 805,                 /* "=>"  */
    yP_ASTGT = 806,                /* "*>"  */
    yP_ANDANDAND = 807,            /* "&&&"  */
    yP_POUNDPOUND = 808,           /* "##"  */
    yP_POUNDMINUSPD = 809,         /* "#-#"  */
    yP_POUNDEQPD = 810,            /* "#=#"  */
    yP_DOTSTAR = 811,              /* ".*"  */
    yP_ATAT = 812,                 /* "@@"  */
    yP_COLONCOLON = 813,           /* "::"  */
    yP_COLONEQ = 814,              /* ":="  */
    yP_COLONDIV = 815,             /* ":/"  */
    yP_ORMINUSGT = 816,            /* "|->"  */
    yP_OREQGT = 817,               /* "|=>"  */
    yP_BRASTAR = 818,              /* "[*"  */
    yP_BRAEQ = 819,                /* "[="  */
    yP_BRAMINUSGT = 820,           /* "[->"  */
    yP_BRAPLUSKET = 821,           /* "[+]"  */
    yP_PLUSPLUS = 822,             /* "++"  */
    yP_MINUSMINUS = 823,           /* "--"  */
    yP_PLUSEQ = 824,               /* "+="  */
    yP_MINUSEQ = 825,              /* "-="  */
    yP_TIMESEQ = 826,              /* "*="  */
    yP_DIVEQ = 827,                /* "/="  */
    yP_MODEQ = 828,                /* "%="  */
    yP_ANDEQ = 829,                /* "&="  */
    yP_OREQ = 830,                 /* "|="  */
    yP_XOREQ = 831,                /* "^="  */
    yP_SLEFTEQ = 832,              /* "<<="  */
    yP_SRIGHTEQ = 833,             /* ">>="  */
    yP_SSRIGHTEQ = 834,            /* ">>>="  */
    yP_PLUSSLASHMINUS = 835,       /* "+/-"  */
    yP_PLUSPCTMINUS = 836,         /* "+%-"  */
    prTAGGED = 837,                /* prTAGGED  */
    prPOUNDPOUND_MULTI = 838,      /* prPOUNDPOUND_MULTI  */
    prUNARYARITH = 839,            /* prUNARYARITH  */
    prREDUCTION = 840,             /* prREDUCTION  */
    prNEGATION = 841,              /* prNEGATION  */
    prLOWER_THAN_ELSE = 842        /* prLOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_VERILOG_PRETMP_H_INCLUDED  */
