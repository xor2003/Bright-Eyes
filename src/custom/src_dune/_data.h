
#ifndef ___DATA_H__
#define ___DATA_H__
#include "asm.h"

#pragma pack(push, 1)
struct cmd_arg_s {
  db name_;
  dw ofs;
  dw storerest;
};

#pragma pack(pop)


#pragma pack(push, 1)
namespace m2c{
struct Memory{
db dummy6_0[6688];
db dummy6_1a20[168];
db dummy6_1ac8;
db dummy6_1ac9;
db dummy6_1aca;
db dummy6_1acb;
db dummy6_1acc;
db dummy6_1acd;
db dummy6_1ace;
db dummy6_1acf;
db dummy6_1ad0[175];
dw word_1015f; // 01a2:015f
dw dummy6_1b81;
dw dummy6_1b83;
dw dummy6_1b85;
dw word_10167; // 01a2:0167
db dummy6_1b89[163];
dw dummy6_1c2c; // 01a2:020c
dw dummy6_1c2e; // 01a2:020e
dw dummy6_1c30; // 01a2:0210
dw dummy6_1c32; // 01a2:0212
dw dummy6_1c34; // 01a2:0214
dw dummy6_1c36; // 01a2:0216
dw dummy6_1c38; // 01a2:0218
dw dummy6_1c3a; // 01a2:021a
db dummy6_1c3c[283];
dw _word_10337_intro_script; // 01a2:0337
dw dummy6_1d59; // 01a2:0339
dw dummy6_1d5b;
dw dummy6_1d5d; // 01a2:033d
dw dummy6_1d5f; // 01a2:033f
dw dummy6_1d61; // 01a2:0341
dw dummy6_1d63;
dw dummy6_1d65; // 01a2:0345
dw dummy6_1d67;
dw dummy6_1d69; // 01a2:0349
dw dummy6_1d6b; // 01a2:034b
dw dummy6_1d6d; // 01a2:034d
dw dummy6_1d6f;
dw dummy6_1d71; // 01a2:0351
dw dummy6_1d73;
dw dummy6_1d75; // 01a2:0355
dw dummy6_1d77; // 01a2:0357
dw dummy6_1d79; // 01a2:0359
dw dummy6_1d7b;
dw dummy6_1d7d; // 01a2:035d
dw dummy6_1d7f; // 01a2:035f
dw dummy6_1d81; // 01a2:0361
dw dummy6_1d83; // 01a2:0363
dw dummy6_1d85; // 01a2:0365
dw dummy6_1d87;
dw dummy6_1d89; // 01a2:0369
dw dummy6_1d8b; // 01a2:036b
dw dummy6_1d8d; // 01a2:036d
dw dummy6_1d8f; // 01a2:036f
dw dummy6_1d91; // 01a2:0371
dw dummy6_1d93;
dw dummy6_1d95; // 01a2:0375
dw dummy6_1d97;
dw dummy6_1d99; // 01a2:0379
dw dummy6_1d9b; // 01a2:037b
dw dummy6_1d9d; // 01a2:037d
dw dummy6_1d9f;
dw dummy6_1da1; // 01a2:0381
dw dummy6_1da3;
dw dummy6_1da5; // 01a2:0385
dw dummy6_1da7; // 01a2:0387
dw dummy6_1da9; // 01a2:0389
dw dummy6_1dab;
dw dummy6_1dad; // 01a2:038d
dw dummy6_1daf;
dw dummy6_1db1; // 01a2:0391
dw dummy6_1db3; // 01a2:0393
dw dummy6_1db5; // 01a2:0395
dw dummy6_1db7;
dw dummy6_1db9; // 01a2:0399
dw dummy6_1dbb;
dw dummy6_1dbd; // 01a2:039d
dw dummy6_1dbf; // 01a2:039f
dw dummy6_1dc1; // 01a2:03a1
dw dummy6_1dc3;
dw dummy6_1dc5; // 01a2:03a5
dw dummy6_1dc7; // 01a2:03a7
dw dummy6_1dc9; // 01a2:03a9
dw dummy6_1dcb; // 01a2:03ab
dw dummy6_1dcd; // 01a2:03ad
dw dummy6_1dcf;
dw dummy6_1dd1; // 01a2:03b1
dw dummy6_1dd3; // 01a2:03b3
dw dummy6_1dd5; // 01a2:03b5
dw dummy6_1dd7; // 01a2:03b7
dw dummy6_1dd9; // 01a2:03b9
dw dummy6_1ddb;
dw dummy6_1ddd; // 01a2:03bd
dw dummy6_1ddf;
dw dummy6_1de1; // 01a2:03c1
dw dummy6_1de3; // 01a2:03c3
dw dummy6_1de5; // 01a2:03c5
dw dummy6_1de7; // 01a2:03c7
dw dummy6_1de9; // 01a2:03c9
dw dummy6_1deb; // 01a2:03cb
dw dummy6_1ded; // 01a2:03cd
dw dummy6_1def; // 01a2:03cf
dw dummy6_1df1; // 01a2:03d1
dw dummy6_1df3; // 01a2:03d3
dw dummy6_1df5; // 01a2:03d5
dw dummy6_1df7; // 01a2:03d7
dw dummy6_1df9; // 01a2:03d9
dw dummy6_1dfb; // 01a2:03db
dw dummy6_1dfd; // 01a2:03dd
dw dummy6_1dff;
dw dummy6_1e01; // 01a2:03e1
dw dummy6_1e03; // 01a2:03e3
dw dummy6_1e05; // 01a2:03e5
dw dummy6_1e07; // 01a2:03e7
dw dummy6_1e09; // 01a2:03e9
dw dummy6_1e0b;
dw dummy6_1e0d; // 01a2:03ed
dw dummy6_1e0f; // 01a2:03ef
dw dummy6_1e11; // 01a2:03f1
dw dummy6_1e13; // 01a2:03f3
dw dummy6_1e15; // 01a2:03f5
dw dummy6_1e17; // 01a2:03f7
dw dummy6_1e19; // 01a2:03f9
dw dummy6_1e1b; // 01a2:03fb
dw dummy6_1e1d; // 01a2:03fd
dw dummy6_1e1f; // 01a2:03ff
dw dummy6_1e21; // 01a2:0401
dw dummy6_1e23; // 01a2:0403
dw dummy6_1e25; // 01a2:0405
dw dummy6_1e27; // 01a2:0407
dw dummy6_1e29; // 01a2:0409
dw dummy6_1e2b; // 01a2:040b
dw dummy6_1e2d; // 01a2:040d
dw dummy6_1e2f; // 01a2:040f
dw dummy6_1e31; // 01a2:0411
dw dummy6_1e33; // 01a2:0413
dw dummy6_1e35; // 01a2:0415
dw dummy6_1e37; // 01a2:0417
dw dummy6_1e39; // 01a2:0419
dw dummy6_1e3b;
dw dummy6_1e3d; // 01a2:041d
dw dummy6_1e3f; // 01a2:041f
dw dummy6_1e41; // 01a2:0421
dw dummy6_1e43; // 01a2:0423
dw dummy6_1e45; // 01a2:0425
dw dummy6_1e47; // 01a2:0427
dw dummy6_1e49; // 01a2:0429
dw dummy6_1e4b; // 01a2:042b
dw dummy6_1e4d; // 01a2:042d
dw dummy6_1e4f; // 01a2:042f
dw dummy6_1e51; // 01a2:0431
dw dummy6_1e53;
dw dummy6_1e55; // 01a2:0435
dw dummy6_1e57; // 01a2:0437
dw dummy6_1e59; // 01a2:0439
dw dummy6_1e5b; // 01a2:043b
dw dummy6_1e5d; // 01a2:043d
dw dummy6_1e5f; // 01a2:043f
dw dummy6_1e61; // 01a2:0441
dw dummy6_1e63; // 01a2:0443
dw dummy6_1e65; // 01a2:0445
dw dummy6_1e67; // 01a2:0447
dw dummy6_1e69; // 01a2:0449
dw dummy6_1e6b; // 01a2:044b
dw dummy6_1e6d; // 01a2:044d
dw dummy6_1e6f; // 01a2:044f
dw dummy6_1e71; // 01a2:0451
dw dummy6_1e73; // 01a2:0453
dw dummy6_1e75; // 01a2:0455
dw dummy6_1e77; // 01a2:0457
dw dummy6_1e79; // 01a2:0459
dw dummy6_1e7b; // 01a2:045b
dw dummy6_1e7d; // 01a2:045d
dw dummy6_1e7f; // 01a2:045f
dw dummy6_1e81; // 01a2:0461
dw dummy6_1e83; // 01a2:0463
dw dummy6_1e85; // 01a2:0465
dw dummy6_1e87; // 01a2:0467
dw dummy6_1e89; // 01a2:0469
dw dummy6_1e8b; // 01a2:046b
dw dummy6_1e8d; // 01a2:046d
dw dummy6_1e8f; // 01a2:046f
dw dummy6_1e91; // 01a2:0471
dw dummy6_1e93; // 01a2:0473
dw dummy6_1e95; // 01a2:0475
dw dummy6_1e97; // 01a2:0477
dw dummy6_1e99; // 01a2:0479
dw dummy6_1e9b; // 01a2:047b
dw dummy6_1e9d; // 01a2:047d
dw dummy6_1e9f;
dw dummy6_1ea1; // 01a2:0481
dw dummy6_1ea3; // 01a2:0483
dw dummy6_1ea5; // 01a2:0485
dw dummy6_1ea7; // 01a2:0487
dw dummy6_1ea9; // 01a2:0489
dw dummy6_1eab; // 01a2:048b
dw dummy6_1ead; // 01a2:048d
dw dummy6_1eaf; // 01a2:048f
dw dummy6_1eb1; // 01a2:0491
dw dummy6_1eb3; // 01a2:0493
dw dummy6_1eb5; // 01a2:0495
dw dummy6_1eb7;
dw dummy6_1eb9; // 01a2:0499
dw dummy6_1ebb; // 01a2:049b
dw dummy6_1ebd; // 01a2:049d
dw dummy6_1ebf; // 01a2:049f
dw dummy6_1ec1; // 01a2:04a1
dw dummy6_1ec3; // 01a2:04a3
dw dummy6_1ec5; // 01a2:04a5
dw dummy6_1ec7; // 01a2:04a7
dw dummy6_1ec9; // 01a2:04a9
dw dummy6_1ecb;
dw dummy6_1ecd; // 01a2:04ad
dw dummy6_1ecf; // 01a2:04af
dw dummy6_1ed1; // 01a2:04b1
dw dummy6_1ed3; // 01a2:04b3
dw dummy6_1ed5; // 01a2:04b5
dw dummy6_1ed7;
dw dummy6_1ed9; // 01a2:04b9
dw dummy6_1edb; // 01a2:04bb
dw dummy6_1edd; // 01a2:04bd
dw dummy6_1edf; // 01a2:04bf
dw dummy6_1ee1; // 01a2:04c1
dw dummy6_1ee3;
dw dummy6_1ee5; // 01a2:04c5
dw dummy6_1ee7; // 01a2:04c7
dw dummy6_1ee9; // 01a2:04c9
dw dummy6_1eeb; // 01a2:04cb
dw dummy6_1eed; // 01a2:04cd
dw dummy6_1eef;
dw dummy6_1ef1; // 01a2:04d1
dw dummy6_1ef3; // 01a2:04d3
dw dummy6_1ef5; // 01a2:04d5
dw dummy6_1ef7; // 01a2:04d7
dw dummy6_1ef9; // 01a2:04d9
dw dummy6_1efb;
dw dummy6_1efd; // 01a2:04dd
dw dummy6_1eff; // 01a2:04df
dw dummy6_1f01; // 01a2:04e1
dw dummy6_1f03; // 01a2:04e3
dw dummy6_1f05; // 01a2:04e5
dw dummy6_1f07;
dw dummy6_1f09; // 01a2:04e9
dw dummy6_1f0b; // 01a2:04eb
dw dummy6_1f0d; // 01a2:04ed
dw dummy6_1f0f; // 01a2:04ef
dw dummy6_1f11; // 01a2:04f1
dw dummy6_1f13;
dw dummy6_1f15; // 01a2:04f5
dw dummy6_1f17; // 01a2:04f7
dw dummy6_1f19; // 01a2:04f9
dw dummy6_1f1b; // 01a2:04fb
dw dummy6_1f1d; // 01a2:04fd
dw dummy6_1f1f;
dw dummy6_1f21; // 01a2:0501
dw dummy6_1f23; // 01a2:0503
dw dummy6_1f25; // 01a2:0505
dw dummy6_1f27; // 01a2:0507
dw dummy6_1f29; // 01a2:0509
dw dummy6_1f2b; // 01a2:050b
dw dummy6_1f2d; // 01a2:050d
dw dummy6_1f2f; // 01a2:050f
dw dummy6_1f31; // 01a2:0511
dw dummy6_1f33; // 01a2:0513
dw dummy6_1f35; // 01a2:0515
dw dummy6_1f37; // 01a2:0517
dw dummy6_1f39; // 01a2:0519
dw dummy6_1f3b; // 01a2:051b
dw dummy6_1f3d; // 01a2:051d
dw dummy6_1f3f; // 01a2:051f
dw dummy6_1f41; // 01a2:0521
dw dummy6_1f43;
dw dummy6_1f45; // 01a2:0525
dw dummy6_1f47; // 01a2:0527
dw dummy6_1f49; // 01a2:0529
dw dummy6_1f4b; // 01a2:052b
dw dummy6_1f4d; // 01a2:052d
dw dummy6_1f4f;
dw dummy6_1f51; // 01a2:0531
dw dummy6_1f53; // 01a2:0533
dw dummy6_1f55; // 01a2:0535
dw dummy6_1f57; // 01a2:0537
dw dummy6_1f59; // 01a2:0539
dw dummy6_1f5b;
dw dummy6_1f5d; // 01a2:053d
dw dummy6_1f5f; // 01a2:053f
dw dummy6_1f61; // 01a2:0541
dw dummy6_1f63; // 01a2:0543
dw dummy6_1f65; // 01a2:0545
dw dummy6_1f67;
dw dummy6_1f69; // 01a2:0549
dw dummy6_1f6b; // 01a2:054b
dw dummy6_1f6d; // 01a2:054d
dw dummy6_1f6f; // 01a2:054f
dw dummy6_1f71; // 01a2:0551
dw dummy6_1f73;
dw dummy6_1f75; // 01a2:0555
dw dummy6_1f77; // 01a2:0557
dw dummy6_1f79; // 01a2:0559
dw dummy6_1f7b; // 01a2:055b
dw dummy6_1f7d; // 01a2:055d
dw dummy6_1f7f;
dw dummy6_1f81; // 01a2:0561
dw dummy6_1f83; // 01a2:0563
dw dummy6_1f85; // 01a2:0565
dw dummy6_1f87; // 01a2:0567
dw dummy6_1f89; // 01a2:0569
dw dummy6_1f8b;
dw dummy6_1f8d; // 01a2:056d
dw dummy6_1f8f; // 01a2:056f
dw dummy6_1f91; // 01a2:0571
dw dummy6_1f93; // 01a2:0573
dw dummy6_1f95; // 01a2:0575
dw dummy6_1f97; // 01a2:0577
db dummy6_1f99[2728];
db dummy6_2a41[6]; // 01a2:1021
db dummy6_2a47[66];
db dummy6_2a89; // 01a2:1069
db dummy6_2a8a; // 01a2:106a
db dummy6_2a8b; // 01a2:106b
db dummy6_2a8c; // 01a2:106c
db dummy6_2a8d; // 01a2:106d
db dummy6_2a8e; // 01a2:106e
db dummy6_2a8f;
db dummy6_2a90;
db dummy6_2a91[134];
dw dummy6_2b17; // 01a2:10f7
db dummy6_2b19; // 01a2:10f9
db dummy6_2b1a; // 01a2:10fa
db dummy6_2b1b; // 01a2:10fb
db dummy6_2b1c; // 01a2:10fc
db dummy6_2b1d; // 01a2:10fd
db dummy6_2b1e; // 01a2:10fe
db dummy6_2b1f; // 01a2:10ff
db dummy6_2b20; // 01a2:1100
db dummy6_2b21;
db dummy6_2b22;
db dummy6_2b23[89];
db dummy6_2b7c[10]; // 01a2:115c
db dummy6_2b86[65];
db dummy6_2bc7[12]; // 01a2:11a7
db dummy6_2bd3[51];
db byte_111e6; // 01a2:11e6
dw off_111e7; // 01a2:11e7
dw dummy6_2c09; // 01a2:11e9
dw off_111eb; // 01a2:11eb
dw dummy6_2c0d; // 01a2:11ed
dw dummy6_2c0f; // 01a2:11ef
dw dummy6_2c11; // 01a2:11f1
dw dummy6_2c13; // 01a2:11f3
dw dummy6_2c15; // 01a2:11f5
dw off_111f7; // 01a2:11f7
dw dummy6_2c19; // 01a2:11f9
dw dummy6_2c1b; // 01a2:11fb
dw dummy6_2c1d; // 01a2:11fd
dw dummy6_2c1f; // 01a2:11ff
dw dummy6_2c21; // 01a2:1201
dw dummy6_2c23; // 01a2:1203
dw dummy6_2c25; // 01a2:1205
dw dummy6_2c27; // 01a2:1207
dw dummy6_2c29; // 01a2:1209
dw dummy6_2c2b; // 01a2:120b
dw dummy6_2c2d; // 01a2:120d
dw dummy6_2c2f; // 01a2:120f
dw dummy6_2c31; // 01a2:1211
dw dummy6_2c33; // 01a2:1213
dw dummy6_2c35; // 01a2:1215
dw dummy6_2c37; // 01a2:1217
dw dummy6_2c39; // 01a2:1219
dw dummy6_2c3b; // 01a2:121b
dw dummy6_2c3d; // 01a2:121d
db dummy6_2c3f[113];
db dummy6_2cb0[19]; // 01a2:1290
db dummy6_2cc3[14]; // 01a2:1290
db dummy6_2cd1[16]; // 01a2:1290
db dummy6_2ce1[20]; // 01a2:1290
db dummy6_2cf5[17]; // 01a2:1290
db dummy6_2d06[17]; // 01a2:1290
db dummy6_2d17[14]; // 01a2:1290
db dummy6_2d25[17]; // 01a2:1290
db dummy6_2d36[21]; // 01a2:1290
db dummy6_2d4b[17]; // 01a2:1290
db dummy6_2d5c[16]; // 01a2:1290
db dummy6_2d6c[15]; // 01a2:1290
db dummy6_2d7b[16]; // 01a2:1290
db dummy6_2d8b[16]; // 01a2:1290
db dummy6_2d9b[17]; // 01a2:1290
db dummy6_2dac[6]; // 01a2:1290
db dummy6_2db2[227];
dw off_11475; // 01a2:1475
dw dummy6_2e97; // 01a2:1477
dw dummy6_2e99; // 01a2:1479
dw dummy6_2e9b; // 01a2:147b
dw dummy6_2e9d; // 01a2:147d
dw dummy6_2e9f; // 01a2:147f
dw dummy6_2ea1; // 01a2:1481
dw dummy6_2ea3; // 01a2:1483
dw dummy6_2ea5; // 01a2:1485
dw dummy6_2ea7; // 01a2:1487
dw dummy6_2ea9; // 01a2:1489
dw dummy6_2eab; // 01a2:148b
db dummy6_2ead[461];
dw off_1165a; // 01a2:165a
dw dummy6_307c; // 01a2:165c
dw dummy6_307e; // 01a2:165e
dw dummy6_3080; // 01a2:1660
dw dummy6_3082; // 01a2:1662
dw dummy6_3084; // 01a2:1664
dw dummy6_3086; // 01a2:1666
dw dummy6_3088; // 01a2:1668
dw dummy6_308a; // 01a2:166a
dw dummy6_308c; // 01a2:166c
dw dummy6_308e; // 01a2:166e
dw dummy6_3090; // 01a2:1670
dw dummy6_3092; // 01a2:1672
dw dummy6_3094; // 01a2:1674
dw dummy6_3096; // 01a2:1676
dw dummy6_3098; // 01a2:1678
dw dummy6_309a; // 01a2:167a
db dummy6_309c[1847];
dw off_11db3; // 01a2:1db3
dw dummy6_37d5; // 01a2:1db5
dw dummy6_37d7; // 01a2:1db7
dw dummy6_37d9; // 01a2:1db9
dw dummy6_37db; // 01a2:1dbb
dw dummy6_37dd; // 01a2:1dbd
dw dummy6_37df; // 01a2:1dbf
dw dummy6_37e1; // 01a2:1dc1
dw dummy6_37e3; // 01a2:1dc3
dw off_11dc5; // 01a2:1dc5
dw dummy6_37e7; // 01a2:1dc7
dw dummy6_37e9; // 01a2:1dc9
dw dummy6_37eb; // 01a2:1dcb
dw dummy6_37ed; // 01a2:1dcd
dw dummy6_37ef; // 01a2:1dcf
dw dummy6_37f1; // 01a2:1dd1
db dummy6_37f3[914];
db dummy6_3b85[11]; // 01a2:2165
db dummy6_3b90[750];
db dummy6_3e7e; // 01a2:245e
db dummy6_3e7f[13356];
dw off_1588b; // 01a2:588b
dw dummy6_72ad; // 01a2:588d
dw dummy6_72af; // 01a2:588f
dw dummy6_72b1; // 01a2:5891
dw dummy6_72b3; // 01a2:5893
dw dummy6_72b5; // 01a2:5895
dw dummy6_72b7; // 01a2:5897
dw dummy6_72b9; // 01a2:5899
db dummy6_72bb[3154];
dw word_164ed; // 01a2:64ed
db dummy6_7f0f[197];
dw word_165b4; // 01a2:65b4
db dummy6_7fd6[1166];
db dummy6_8464; // 01a2:6a44
db dummy6_8465[43];
db dummy6_8490; // 01a2:6a70
db dummy6_8491[388];
dw off_16bf5; // 01a2:6bf5
dw dummy6_8617; // 01a2:6bf7
dw dummy6_8619; // 01a2:6bf9
dw dummy6_861b; // 01a2:6bfb
dw dummy6_861d; // 01a2:6bfd
dw dummy6_861f; // 01a2:6bff
dw dummy6_8621; // 01a2:6c01
dw dummy6_8623; // 01a2:6c03
dw dummy6_8625; // 01a2:6c05
dw dummy6_8627; // 01a2:6c07
dw dummy6_8629; // 01a2:6c09
dw dummy6_862b; // 01a2:6c0b
dw dummy6_862d; // 01a2:6c0d
dw dummy6_862f; // 01a2:6c0f
dw dummy6_8631; // 01a2:6c11
dw dummy6_8633; // 01a2:6c13
db dummy6_8635[17];
dw off_16c26; // 01a2:6c26
dw dummy6_8648; // 01a2:6c28
dw dummy6_864a; // 01a2:6c2a
dw dummy6_864c; // 01a2:6c2c
dw dummy6_864e; // 01a2:6c2e
dw dummy6_8650; // 01a2:6c30
dw dummy6_8652; // 01a2:6c32
dw dummy6_8654; // 01a2:6c34
dw dummy6_8656; // 01a2:6c36
dw dummy6_8658; // 01a2:6c38
dw dummy6_865a; // 01a2:6c3a
dw dummy6_865c; // 01a2:6c3c
dw dummy6_865e; // 01a2:6c3e
dw dummy6_8660; // 01a2:6c40
dw dummy6_8662; // 01a2:6c42
dw dummy6_8664; // 01a2:6c44
db dummy6_8666[1282];
db dummy6_8b68; // 01a2:7148
db dummy6_8b69[6853];
db dummy6_a62e; // 01a2:8c0e
db dummy6_a62f[5368];
db dummy6_bb27[9]; // 01a2:a107
db dummy6_bb30[9]; // 01a2:a107
db dummy6_bb39[10]; // 01a2:a107
db dummy6_bb43[11]; // 01a2:a107
db dummy6_bb4e[13]; // 01a2:a107
db dummy6_bb5b[12]; // 01a2:a107
db dummy6_bb67[11]; // 01a2:a107
db dummy6_bb72[11]; // 01a2:a107
db dummy6_bb7d[12]; // 01a2:a107
db dummy6_bb89[10]; // 01a2:a107
db dummy6_bb93[12]; // 01a2:a107
db dummy6_bb9f[12]; // 01a2:a107
db dummy6_bbab[10]; // 01a2:a107
db dummy6_bbb5[12]; // 01a2:a107
db dummy6_bbc1[11]; // 01a2:a107
db dummy6_bbcc[12]; // 01a2:a107
db dummy6_bbd8[10]; // 01a2:a107
db dummy6_bbe2[2]; // 01a2:a107
db dummy6_bbe4[434];
dw off_1a376; // 01a2:a376
dw dummy6_bd98; // 01a2:a378
dw dummy6_bd9a; // 01a2:a37a
dw dummy6_bd9c; // 01a2:a37c
dw dummy6_bd9e; // 01a2:a37e
dw dummy6_bda0; // 01a2:a380
dw dummy6_bda2; // 01a2:a382
dw dummy6_bda4; // 01a2:a384
dw dummy6_bda6; // 01a2:a386
dw dummy6_bda8; // 01a2:a388
dw dummy6_bdaa; // 01a2:a38a
dw dummy6_bdac; // 01a2:a38c
dw dummy6_bdae; // 01a2:a38e
dw dummy6_bdb0; // 01a2:a390
dw dummy6_bdb2; // 01a2:a392
dw dummy6_bdb4; // 01a2:a394
db dummy6_bdb6[2344];
db dummy6_c6de; // 01a2:acbe
db dummy6_c6df[5244];
dw off_1c13b; // 01a2:c13b
db dummy6_db5d[221];
db _byte_1c21a_pal_offset; // 01a2:c21a
db dummy6_dc3b[2679];
dw word_1cc92; // 01a2:cc92
dw _word_1cc94_bltfunc; // 01a2:cc94
db dummy6_e6b6[4570];
db dummy6_f890[10]; // 01a2:de70
db dummy6_f89a[301];
db dummy6_f9c7[9]; // 01a2:dfa7
db dummy6_f9d0[7]; // 01a2:dfa7
db dummy6_f9d7[1109];
cmd_arg_s _stru_1e40c_cmd_arg_list;
cmd_arg_s dummy6_fe33;
cmd_arg_s dummy6_fe3a;
cmd_arg_s dummy6_fe41;
cmd_arg_s dummy6_fe48;
cmd_arg_s dummy6_fe4f;
cmd_arg_s dummy6_fe56;
cmd_arg_s dummy6_fe5d;
cmd_arg_s dummy6_fe64;
cmd_arg_s dummy6_fe6b;
cmd_arg_s dummy6_fe72;
cmd_arg_s dummy6_fe79;
cmd_arg_s dummy6_fe80;
cmd_arg_s dummy6_fe87;
cmd_arg_s dummy6_fe8e;
cmd_arg_s dummy6_fe95;
cmd_arg_s dummy6_fe9c;
cmd_arg_s dummy6_fea3;
cmd_arg_s dummy6_feaa;
cmd_arg_s dummy6_feb1;
cmd_arg_s dummy6_feb8;
cmd_arg_s dummy6_febf;
cmd_arg_s dummy6_fec6;
db dummy6_fecd[1061];
dw _word_1e8d2_pit_timer_value; // 01a2:e8d2
db _byte_1e8d4_pit_timer_counter; // 01a2:e8d4
db dummy6_102f5[126];
dw word_1e953; // 01a2:e953
db unk_1e955; // 01a2:e955
dw off_1e956; // 01a2:e956
dw dummy6_10378; // 01a2:e958
dd off_1e95a; // 01a2:e95a
dd off_1e95e; // 01a2:e95e
dd off_1e962; // 01a2:e962
dd off_1e966; // 01a2:e966
dd off_1e96a; // 01a2:e96a
dd off_1e96e; // 01a2:e96e
dd off_1e972; // 01a2:e972
dd off_1e976; // 01a2:e976
db dummy6_1039a[182];
dw seg_1ea30; // 01a2:ea30
db dummy6_10452[67];
dw word_1ea75; // 01a2:ea75
dw _off_1ea77_memory_func_1; // 01a2:ea77
dw _off_1ea79_memory_func_2; // 01a2:ea79
db dummy6_1049b[497];
db dummy6_1068c[26]; // 01a2:ec6c
db dummy6_106a6[22]; // 01a2:ec6c
db dummy6_106bc[158];
dw _word_1ed3a_ems_emm_handle; // 01a2:ed3a
dw _word_1ed3c_ems_page_frame_base_seg; // 01a2:ed3c
dw word_1ed3e; // 01a2:ed3e
db dummy6_10760[330];
dw _word_1ee8a_xms_memory_block; // 01a2:ee8a
dd _dword_1ee8c_xms_driver_addr; // 01a2:ee8c
dw word_1ee90; // 01a2:ee90
dw dummy6_108b2;
dw dummy6_108b4;
dw dummy6_108b6;
dw dummy6_108b8;
dw dummy6_108ba;
dw dummy6_108bc;
dw dummy6_108be;
db dummy6_108c0[1552];
dw word_1f4b0; // 10ed:0000
dw word_1f4b2; // 10ed:0002
dw word_1f4b4; // 10ed:0004
dw word_1f4b6; // 10ed:0006
db byte_1f4b8; // 10ed:0008
db byte_1f4b9; // 10ed:0009
db byte_1f4ba; // 10ed:000a
db byte_1f4bb; // 10ed:000b
db byte_1f4bc; // 10ed:000c
db byte_1f4bd; // 10ed:000d
db dummy6_10ede;
db dummy6_10edf;
dw word_1f4c0; // 10ed:0010
dw word_1f4c2; // 10ed:0012
db unk_1f4c4; // 10ed:0014
db unk_1f4c5; // 10ed:0015
db dummy6_10ee6;
db unk_1f4c7; // 10ed:0017
db unk_1f4c8; // 10ed:0018
db dummy6_10ee9;
db unk_1f4ca; // 10ed:001a
db dummy6_10eeb;
db dummy6_10eec;
db dummy6_10eed;
db dummy6_10eee;
db dummy6_10eef;
db unk_1f4d0; // 10ed:0020
db dummy6_10ef1;
db dummy6_10ef2;
db byte_1f4d3; // 10ed:0023
db dummy6_10ef4;
db byte_1f4d5; // 10ed:0025
db byte_1f4d6; // 10ed:0026
db unk_1f4d7; // 10ed:0027
db unk_1f4d8; // 10ed:0028
db byte_1f4d9; // 10ed:0029
db byte_1f4da; // 10ed:002a
db byte_1f4db; // 10ed:002b
db dummy6_10efc;
db unk_1f4dd; // 10ed:002d
db unk_1f4de; // 10ed:002e
db unk_1f4df; // 10ed:002f
db dummy6_10f00;
db dummy6_10f01;
db unk_1f4e2; // 10ed:0032
db unk_1f4e3; // 10ed:0033
db dummy6_10f04;
db dummy6_10f05;
db unk_1f4e6; // 10ed:0036
db dummy6_10f07;
db dummy6_10f08;
db dummy6_10f09;
db unk_1f4ea; // 10ed:003a
db dummy6_10f0b;
db unk_1f4ec; // 10ed:003c
db dummy6_10f0d;
db dummy6_10f0e;
db dummy6_10f0f;
db dummy6_10f10;
db unk_1f4f1; // 10ed:0041
db dummy6_10f12;
db dummy6_10f13;
db dummy6_10f14;
db dummy6_10f15;
db dummy6_10f16;
db dummy6_10f17;
db dummy6_10f18;
db unk_1f4f9; // 10ed:0049
db dummy6_10f1a;
db dummy6_10f1b;
db dummy6_10f1c;
db dummy6_10f1d;
db dummy6_10f1e;
db dummy6_10f1f;
db dummy6_10f20;
db dummy6_10f21;
db dummy6_10f22;
db dummy6_10f23;
db dummy6_10f24;
db dummy6_10f25;
db unk_1f506; // 10ed:0056
db dummy6_10f27;
db dummy6_10f28;
db dummy6_10f29;
db dummy6_10f2a;
db dummy6_10f2b;
db dummy6_10f2c;
db dummy6_10f2d;
db dummy6_10f2e;
db dummy6_10f2f;
db unk_1f510; // 10ed:0060
db dummy6_10f31;
db dummy6_10f32;
db dummy6_10f33;
db unk_1f514; // 10ed:0064
db dummy6_10f35;
db dummy6_10f36;
db unk_1f517; // 10ed:0067
db dummy6_10f38;
db unk_1f519; // 10ed:0069
db dummy6_10f3a;
db dummy6_10f3b;
db dummy6_10f3c;
db dummy6_10f3d;
db dummy6_10f3e;
db dummy6_10f3f;
db dummy6_10f40;
db dummy6_10f41;
db dummy6_10f42;
db dummy6_10f43;
db dummy6_10f44;
db dummy6_10f45;
db dummy6_10f46;
db dummy6_10f47;
db dummy6_10f48;
db dummy6_10f49;
db unk_1f52a; // 10ed:007a
db dummy6_10f4b;
db dummy6_10f4c;
db dummy6_10f4d;
db unk_1f52e; // 10ed:007e
db dummy6_10f4f;
db unk_1f530; // 10ed:0080
db dummy6_10f51;
db res_hark_hsq; // 10ed:0082
db dummy6_10f53;
db dummy6_10f54;
db dummy6_10f55;
db dummy6_10f56;
db dummy6_10f57;
db unk_1f538; // 10ed:0088
db unk_1f539; // 10ed:0089
db dummy6_10f5a;
db dummy6_10f5b;
db unk_1f53c; // 10ed:008c
db dummy6_10f5d;
db dummy6_10f5e;
db dummy6_10f5f;
db dummy6_10f60;
db dummy6_10f61;
db dummy6_10f62;
db dummy6_10f63;
db unk_1f544; // 10ed:0094
db dummy6_10f65;
db unk_1f546; // 10ed:0096
db dummy6_10f67;
dw word_1f548; // 10ed:0098
dw word_1f54a; // 10ed:009a
db dummy6_10f6c;
db unk_1f54d; // 10ed:009d
db dummy6_10f6e;
db dummy6_10f6f;
db dummy6_10f70;
db dummy6_10f71;
db unk_1f552; // 10ed:00a2
db dummy6_10f73;
db dummy6_10f74;
db dummy6_10f75;
db dummy6_10f76;
db dummy6_10f77;
db dummy6_10f78; // 10ed:00a8
db unk_1f559; // 10ed:00a9
db unk_1f55a; // 10ed:00aa
db unk_1f55b; // 10ed:00ab
db dummy6_10f7c; // 10ed:00ac
db dummy6_10f7d; // 10ed:00ad
db dummy6_10f7e;
db dummy6_10f7f;
db dummy6_10f80;
db unk_1f561; // 10ed:00b1
db dummy6_10f82;
db dummy6_10f83;
db dummy6_10f84;
db dummy6_10f85;
db dummy6_10f86;
db dummy6_10f87;
db unk_1f568; // 10ed:00b8
db dummy6_10f89;
db unk_1f56a; // 10ed:00ba
db dummy6_10f8b;
db dummy6_10f8c;
db dummy6_10f8d;
db unk_1f56e; // 10ed:00be
db unk_1f56f; // 10ed:00bf
db dummy6_10f90;
db dummy6_10f91;
db byte_1f572; // 10ed:00c2
db dummy6_10f93;
db dummy6_10f94;
db byte_1f575; // 10ed:00c5
db byte_1f576; // 10ed:00c6
db dummy6_10f97;
db unk_1f578; // 10ed:00c8
db res_smug_hsq; // 10ed:00c9
db dummy6_10f9a; // 10ed:00ca
db dummy6_10f9b; // 10ed:00cb
db dummy6_10f9c;
db dummy6_10f9d;
db dummy6_10f9e;
db byte_1f57f; // 10ed:00cf
db dummy6_10fa0; // 10ed:00d0
db dummy6_10fa1; // 10ed:00d1
db dummy6_10fa2;
db dummy6_10fa3;
db dummy6_10fa4;
db byte_1f585; // 10ed:00d5
db dummy6_10fa6; // 10ed:00d6
db dummy6_10fa7; // 10ed:00d7
db dummy6_10fa8;
db dummy6_10fa9;
db dummy6_10faa;
db dummy6_10fab;
db dummy6_10fac; // 10ed:00dc
db dummy6_10fad; // 10ed:00dd
db dummy6_10fae;
db dummy6_10faf;
db dummy6_10fb0;
db dummy6_10fb1;
db dummy6_10fb2; // 10ed:00e2
db dummy6_10fb3; // 10ed:00e3
db dummy6_10fb4;
db dummy6_10fb5;
db dummy6_10fb6;
db byte_1f597; // 10ed:00e7
db byte_1f598; // 10ed:00e8
db byte_1f599; // 10ed:00e9
db byte_1f59a; // 10ed:00ea
db dummy6_10fbb;
db dummy6_10fbc;
db dummy6_10fbd;
db dummy6_10fbe;
db dummy6_10fbf;
db unk_1f5a0; // 10ed:00f0
db res_frm1_hsq_; // 10ed:00f1
db dummy6_10fc2;
db dummy6_10fc3;
db byte_1f5a4; // 10ed:00f4
db unk_1f5a5; // 10ed:00f5
db byte_1f5a6; // 10ed:00f6
db dummy6_10fc7;
db dummy6_10fc8;
db dummy6_10fc9;
db dummy6_10fca;
db byte_1f5ab; // 10ed:00fb
db dummy6_10fcc; // 10ed:00fc
db dummy6_10fcd;
db dummy6_10fce;
db unk_1f5af; // 10ed:00ff
db dummy6_10fd0; // 10ed:0100
db dummy6_10fd1; // 10ed:0101
db dummy6_10fd2; // 10ed:0102
db dummy6_10fd3; // 10ed:0103
db dummy6_10fd4; // 10ed:0104
db dummy6_10fd5; // 10ed:0105
db dummy6_10fd6;
db dummy6_10fd7;
db dummy6_10fd8; // 10ed:0108
db dummy6_10fd9;
db dummy6_10fda; // 10ed:010a
db dummy6_10fdb; // 10ed:010b
db dummy6_10fdc;
db dummy6_10fdd;
db dummy6_10fde;
db dummy6_10fdf;
db dummy6_10fe0;
db dummy6_10fe1;
db dummy6_10fe2;
db dummy6_10fe3;
db dummy6_10fe4;
db unk_1f5c5; // 10ed:0115
db unk_1f5c6; // 10ed:0116
db dummy6_10fe7[32]; // 10ed:0117
db dummy6_11007;
db dummy6_11008; // 10ed:0138
db dummy6_11009; // 10ed:0139
db dummy6_1100a; // 10ed:013a
db dummy6_1100b; // 10ed:013b
db dummy6_1100c; // 10ed:013c
db dummy6_1100d; // 10ed:013d
db dummy6_1100e;
db dummy6_1100f;
db unk_1f5f0; // 10ed:0140
db dummy6_11011; // 10ed:0141
db dummy6_11012; // 10ed:0142
db dummy6_11013; // 10ed:0143
db dummy6_11014;
db unk_1f5f5; // 10ed:0145
db dummy6_11016;
db dummy6_11017;
db dummy6_11018;
db dummy6_11019;
db dummy6_1101a; // 10ed:014a
db dummy6_1101b;
db dummy6_1101c; // 10ed:014c
db unk_1f5fd; // 10ed:014d
db dummy6_1101e; // 10ed:014e
db dummy6_1101f; // 10ed:014f
db dummy6_11020; // 10ed:0150
db dummy6_11021; // 10ed:0151
db dummy6_11022;
db dummy6_11023;
db dummy6_11024; // 10ed:0154
db dummy6_11025; // 10ed:0155
db dummy6_11026; // 10ed:0156
db dummy6_11027; // 10ed:0157
db dummy6_11028; // 10ed:0158
db dummy6_11029; // 10ed:0159
db dummy6_1102a;
db dummy6_1102b;
db dummy6_1102c; // 10ed:015c
db dummy6_1102d; // 10ed:015d
db unk_1f60e; // 10ed:015e
db unk_1f60f; // 10ed:015f
db dummy6_11030[32]; // 10ed:0160
db unk_1f630; // 10ed:0180
db dummy6_11051[32]; // 10ed:0181
db dummy6_11071[32]; // 10ed:01a1
db dummy6_11091[32]; // 10ed:01c1
db dummy6_110b1; // 10ed:01e1
db dummy6_110b2; // 10ed:01e2
db dummy6_110b3; // 10ed:01e3
db dummy6_110b4; // 10ed:01e4
db dummy6_110b5; // 10ed:01e5
db dummy6_110b6;
db dummy6_110b7;
db dummy6_110b8; // 10ed:01e8
db dummy6_110b9; // 10ed:01e9
db dummy6_110ba; // 10ed:01ea
db dummy6_110bb; // 10ed:01eb
db dummy6_110bc;
db dummy6_110bd;
db dummy6_110be;
db dummy6_110bf;
db dummy6_110c0;
db dummy6_110c1;
db dummy6_110c2; // 10ed:01f2
db dummy6_110c3;
db dummy6_110c4; // 10ed:01f4
db dummy6_110c5; // 10ed:01f5
db dummy6_110c6;
db dummy6_110c7; // 10ed:01f7
db dummy6_110c8; // 10ed:01f8
db dummy6_110c9;
db dummy6_110ca;
db dummy6_110cb;
db dummy6_110cc; // 10ed:01fc
db dummy6_110cd; // 10ed:01fd
db dummy6_110ce; // 10ed:01fe
db unk_1f6af; // 10ed:01ff
db dummy6_110d0; // 10ed:0200
db dummy6_110d1; // 10ed:0201
db dummy6_110d2;
db dummy6_110d3;
db dummy6_110d4; // 10ed:0204
db dummy6_110d5;
db dummy6_110d6; // 10ed:0206
db dummy6_110d7; // 10ed:0207
db dummy6_110d8;
db dummy6_110d9;
dw dummy6_110da;
db dummy6_110dc[32]; // 10ed:020c
db dummy6_110fc[32]; // 10ed:022c
db dummy6_1111c[32]; // 10ed:024c
db dummy6_1113c[32]; // 10ed:026c
db dummy6_1115c[32]; // 10ed:028c
db dummy6_1117c; // 10ed:02ac
db dummy6_1117d; // 10ed:02ad
db dummy6_1117e; // 10ed:02ae
db unk_1f75f; // 10ed:02af
db dummy6_11180;
db dummy6_11181;
db dummy6_11182;
db dummy6_11183;
db dummy6_11184;
db dummy6_11185;
db dummy6_11186; // 10ed:02b6
db dummy6_11187;
db dummy6_11188; // 10ed:02b8
db dummy6_11189;
db dummy6_1118a;
db dummy6_1118b;
db dummy6_1118c;
db dummy6_1118d;
db dummy6_1118e;
db dummy6_1118f; // 10ed:02bf
db dummy6_11190; // 10ed:02c0
dw word_1f771; // 10ed:02c1
dw dummy6_11193; // 10ed:02c3
db dummy6_11195[32]; // 10ed:02c5
db dummy6_111b5; // 10ed:02e5
db dummy6_111b6; // 10ed:02e6
db dummy6_111b7; // 10ed:02e7
db dummy6_111b8;
db dummy6_111b9;
db dummy6_111ba;
db dummy6_111bb;
db dummy6_111bc;
db dummy6_111bd;
db dummy6_111be; // 10ed:02ee
db dummy6_111bf;
db dummy6_111c0;
db dummy6_111c1;
db dummy6_111c2;
db dummy6_111c3;
db dummy6_111c4;
db dummy6_111c5;
db dummy6_111c6;
db dummy6_111c7;
db dummy6_111c8; // 10ed:02f8
db dummy6_111c9; // 10ed:02f9
db dummy6_111ca; // 10ed:02fa
db dummy6_111cb; // 10ed:02fb
db dummy6_111cc; // 10ed:02fc
db dummy6_111cd; // 10ed:02fd
db dummy6_111ce;
db dummy6_111cf;
db dummy6_111d0; // 10ed:0300
db unk_1f7b1; // 10ed:0301
db dummy6_111d2[32]; // 10ed:0302
db dummy6_111f2;
db dummy6_111f3;
db dummy6_111f4;
db dummy6_111f5;
db dummy6_111f6; // 10ed:0326
db dummy6_111f7;
db dummy6_111f8; // 10ed:0328
db dummy6_111f9; // 10ed:0329
db dummy6_111fa; // 10ed:032a
db dummy6_111fb;
db dummy6_111fc;
db dummy6_111fd;
db dummy6_111fe;
db dummy6_111ff;
db dummy6_11200; // 10ed:0330
db dummy6_11201; // 10ed:0331
db dummy6_11202; // 10ed:0332
db dummy6_11203; // 10ed:0333
db dummy6_11204; // 10ed:0334
db dummy6_11205;
db dummy6_11206;
dw word_1f7e7; // 10ed:0337
db dummy6_11209[32]; // 10ed:0339
db dummy6_11229[32]; // 10ed:0359
db dummy6_11249[32]; // 10ed:0379
db dummy6_11269[32]; // 10ed:0399
db dummy6_11289[32]; // 10ed:03b9
db dummy6_112a9; // 10ed:03d9
db dummy6_112aa; // 10ed:03da
db dummy6_112ab; // 10ed:03db
db dummy6_112ac; // 10ed:03dc
db dummy6_112ad;
db dummy6_112ae;
db dummy6_112af;
db dummy6_112b0; // 10ed:03e0
db dummy6_112b1;
db dummy6_112b2; // 10ed:03e2
db dummy6_112b3; // 10ed:03e3
db dummy6_112b4;
db dummy6_112b5;
db dummy6_112b6;
db unk_1f897; // 10ed:03e7
db unk_1f898; // 10ed:03e8
db dummy6_112b9[32]; // 10ed:03e9
db dummy6_112d9[32]; // 10ed:0409
db dummy6_112f9[32]; // 10ed:0429
db dummy6_11319[32]; // 10ed:0449
db dummy6_11339[32]; // 10ed:0469
db dummy6_11359[32]; // 10ed:0489
db dummy6_11379;
db dummy6_1137a;
db dummy6_1137b;
db dummy6_1137c;
db dummy6_1137d;
db dummy6_1137e; // 10ed:04ae
db dummy6_1137f;
db unk_1f960; // 10ed:04b0
db dummy6_11381[32]; // 10ed:04b1
db dummy6_113a1[32]; // 10ed:04d1
db dummy6_113c1[32]; // 10ed:04f1
db dummy6_113e1[32]; // 10ed:0511
db dummy6_11401[32]; // 10ed:0531
db dummy6_11421[32]; // 10ed:0551
db dummy6_11441[32]; // 10ed:0571
db dummy6_11461[32]; // 10ed:0591
db dummy6_11481[32]; // 10ed:05b1
db dummy6_114a1[32]; // 10ed:05d1
db dummy6_114c1[32]; // 10ed:05f1
db dummy6_114e1[32]; // 10ed:0611
db dummy6_11501[32]; // 10ed:0631
db dummy6_11521[32]; // 10ed:0651
db dummy6_11541[32]; // 10ed:0671
db dummy6_11561[32]; // 10ed:0691
db dummy6_11581[32]; // 10ed:06b1
db dummy6_115a1[32]; // 10ed:06d1
db dummy6_115c1; // 10ed:06f1
db dummy6_115c2; // 10ed:06f2
db dummy6_115c3; // 10ed:06f3
db dummy6_115c4;
db dummy6_115c5;
db dummy6_115c6;
db dummy6_115c7;
db dummy6_115c8;
db dummy6_115c9;
db dummy6_115ca; // 10ed:06fa
db dummy6_115cb;
db dummy6_115cc; // 10ed:06fc
db dummy6_115cd; // 10ed:06fd
db dummy6_115ce;
db dummy6_115cf; // 10ed:06ff
db dummy6_115d0; // 10ed:0700
db dummy6_115d1; // 10ed:0701
db dummy6_115d2;
db dummy6_115d3;
db dummy6_115d4; // 10ed:0704
db dummy6_115d5; // 10ed:0705
db dummy6_115d6; // 10ed:0706
db dummy6_115d7; // 10ed:0707
db dummy6_115d8; // 10ed:0708
db dummy6_115d9; // 10ed:0709
db dummy6_115da;
db dummy6_115db;
db unk_1fbbc; // 10ed:070c
db dummy6_115dd[32]; // 10ed:070d
db dummy6_115fd[32]; // 10ed:072d
db dummy6_1161d[32]; // 10ed:074d
db dummy6_1163d[32]; // 10ed:076d
db dummy6_1165d[32]; // 10ed:078d
db dummy6_1167d[32]; // 10ed:07ad
db dummy6_1169d[32]; // 10ed:07cd
db dummy6_116bd; // 10ed:07ed
db dummy6_116be; // 10ed:07ee
db dummy6_116bf; // 10ed:07ef
db dummy6_116c0;
db dummy6_116c1;
db dummy6_116c2;
db dummy6_116c3;
db dummy6_116c4;
db dummy6_116c5;
db dummy6_116c6; // 10ed:07f6
db dummy6_116c7;
db dummy6_116c8;
db dummy6_116c9;
db dummy6_116ca;
db dummy6_116cb;
db dummy6_116cc;
db dummy6_116cd;
db dummy6_116ce;
db dummy6_116cf; // 10ed:07ff
db _unk_1fcb0_dune_dat_toc_seg; // 10ed:0800
db dummy6_116d1[32]; // 10ed:0801
db dummy6_116f1; // 10ed:0821
db dummy6_116f2;
db dummy6_116f3;
db dummy6_116f4; // 10ed:0824
db dummy6_116f5;
db unk_1fcd6; // 10ed:0826
db dummy6_116f7[32]; // 10ed:0827
db dummy6_11717[32]; // 10ed:0847
db dummy6_11737[32]; // 10ed:0867
db dummy6_11757[32]; // 10ed:0887
db dummy6_11777[32]; // 10ed:08a7
db dummy6_11797[32]; // 10ed:08c7
db dummy6_117b7[32]; // 10ed:08e7
db dummy6_117d7[32]; // 10ed:0907
db dummy6_117f7[32]; // 10ed:0927
db dummy6_11817[32]; // 10ed:0947
db dummy6_11837[32]; // 10ed:0967
db dummy6_11857[32]; // 10ed:0987
db dummy6_11877[32]; // 10ed:09a7
db dummy6_11897[32]; // 10ed:09c7
db dummy6_118b7;
db dummy6_118b8; // 10ed:09e8
db dummy6_118b9; // 10ed:09e9
db dummy6_118ba; // 10ed:09ea
db dummy6_118bb; // 10ed:09eb
db dummy6_118bc;
db dummy6_118bd; // 10ed:09ed
db dummy6_118be; // 10ed:09ee
db unk_1fe9f; // 10ed:09ef
db dummy6_118c0[32]; // 10ed:09f0
db dummy6_118e0;
db dummy6_118e1;
db dummy6_118e2;
db dummy6_118e3;
db dummy6_118e4;
db dummy6_118e5;
db unk_1fec6; // 10ed:0a16
db dummy6_118e7[32]; // 10ed:0a17
db dummy6_11907;
db dummy6_11908;
db dummy6_11909; // 10ed:0a39
db dummy6_1190a; // 10ed:0a3a
db dummy6_1190b; // 10ed:0a3b
db dummy6_1190c; // 10ed:0a3c
db dummy6_1190d;
db dummy6_1190e; // 10ed:0a3e
db dummy6_1190f; // 10ed:0a3f
db dummy6_11910;
db dummy6_11911; // 10ed:0a41
db dummy6_11912; // 10ed:0a42
db dummy6_11913;
db unk_1fef4; // 10ed:0a44
db dummy6_11915[32]; // 10ed:0a45
db dummy6_11935[32]; // 10ed:0a65
db dummy6_11955[32]; // 10ed:0a85
db dummy6_11975[32]; // 10ed:0aa5
db dummy6_11995[32]; // 10ed:0ac5
db dummy6_119b5[32]; // 10ed:0ae5
db dummy6_119d5[32]; // 10ed:0b05
db dummy6_119f5;
db dummy6_119f6;
db dummy6_119f7;
db dummy6_119f8;
db dummy6_119f9;
db dummy6_119fa;
db dummy6_119fb;
db dummy6_119fc; // 10ed:0b2c
db dummy6_119fd; // 10ed:0b2d
db dummy6_119fe; // 10ed:0b2e
db dummy6_119ff; // 10ed:0b2f
db dummy6_11a00;
db dummy6_11a01; // 10ed:0b31
db dummy6_11a02; // 10ed:0b32
db dummy6_11a03;
db dummy6_11a04; // 10ed:0b34
db dummy6_11a05; // 10ed:0b35
db dummy6_11a06;
db dummy6_11a07;
db dummy6_11a08;
db dummy6_11a09;
db dummy6_11a0a;
db dummy6_11a0b;
db dummy6_11a0c;
db dummy6_11a0d;
db dummy6_11a0e;
db dummy6_11a0f;
db unk_1fff0; // 10ed:0b40
db dummy6_11a11;
db dummy6_11a12;
db dummy6_11a13;
db dummy6_11a14;
db dummy6_11a15;
db dummy6_11a16;
db dummy6_11a17; // 10ed:0b47
db dummy6_11a18; // 10ed:0b48
db dummy6_11a19; // 10ed:0b49
db dummy6_11a1a; // 10ed:0b4a
db dummy6_11a1b;
db dummy6_11a1c; // 10ed:0b4c
db dummy6_11a1d; // 10ed:0b4d
db dummy6_11a1e;
db unk_1ffff; // 10ed:0b4f
db dummy6_11a20[32]; // 10ed:0b50
db dummy6_11a40[32]; // 10ed:0b70
db dummy6_11a60[32]; // 10ed:0b90
db dummy6_11a80[32]; // 10ed:0bb0
db dummy6_11aa0[32]; // 10ed:0bd0
db dummy6_11ac0[32]; // 10ed:0bf0
db dummy6_11ae0[32]; // 10ed:0c10
db dummy6_11b00[32]; // 10ed:0c30
db dummy6_11b20[32]; // 10ed:0c50
db dummy6_11b40[32]; // 10ed:0c70
db dummy6_11b60[32]; // 10ed:0c90
db dummy6_11b80[32]; // 10ed:0cb0
db dummy6_11ba0[32]; // 10ed:0cd0
db dummy6_11bc0[32]; // 10ed:0cf0
db dummy6_11be0[32]; // 10ed:0d10
db dummy6_11c00[32]; // 10ed:0d30
db dummy6_11c20[32]; // 10ed:0d50
db dummy6_11c40[32]; // 10ed:0d70
db dummy6_11c60[32]; // 10ed:0d90
db dummy6_11c80[32]; // 10ed:0db0
db dummy6_11ca0[32]; // 10ed:0dd0
db dummy6_11cc0[32]; // 10ed:0df0
db dummy6_11ce0[32]; // 10ed:0e10
db dummy6_11d00[32]; // 10ed:0e30
db dummy6_11d20[32]; // 10ed:0e50
db dummy6_11d40[32]; // 10ed:0e70
db dummy6_11d60[32]; // 10ed:0e90
db dummy6_11d80[32]; // 10ed:0eb0
db dummy6_11da0[32]; // 10ed:0ed0
db dummy6_11dc0[32]; // 10ed:0ef0
db dummy6_11de0[32]; // 10ed:0f10
db dummy6_11e00; // 10ed:0f30
db dummy6_11e01; // 10ed:0f31
db dummy6_11e02; // 10ed:0f32
db dummy6_11e03; // 10ed:0f33
db dummy6_11e04; // 10ed:0f34
db dummy6_11e05; // 10ed:0f35
db dummy6_11e06; // 10ed:0f36
db dummy6_11e07; // 10ed:0f37
db unk_203e8; // 10ed:0f38
db dummy6_11e09[32]; // 10ed:0f39
db dummy6_11e29;
db dummy6_11e2a;
db dummy6_11e2b;
db dummy6_11e2c;
db dummy6_11e2d;
db dummy6_11e2e;
db dummy6_11e2f; // 10ed:0f5f
db dummy6_11e30;
db dummy6_11e31;
db dummy6_11e32;
db dummy6_11e33;
db dummy6_11e34; // 10ed:0f64
db dummy6_11e35; // 10ed:0f65
db unk_20416; // 10ed:0f66
db dummy6_11e37[32]; // 10ed:0f67
db dummy6_11e57[32]; // 10ed:0f87
db dummy6_11e77[32]; // 10ed:0fa7
db dummy6_11e97;
db dummy6_11e98;
db dummy6_11e99;
db dummy6_11e9a;
db dummy6_11e9b;
db dummy6_11e9c;
db dummy6_11e9d;
db dummy6_11e9e;
db dummy6_11e9f;
db dummy6_11ea0;
db dummy6_11ea1;
db dummy6_11ea2;
db dummy6_11ea3;
db dummy6_11ea4;
db dummy6_11ea5;
db dummy6_11ea6;
db dummy6_11ea7;
db unk_20488; // 10ed:0fd8
db dummy6_11ea9; // 10ed:0fd9
db dummy6_11eaa; // 10ed:0fda
db unk_2048b; // 10ed:0fdb
db dummy6_11eac; // 10ed:0fdc
db dummy6_11ead; // 10ed:0fdd
db dummy6_11eae;
db dummy6_11eaf;
db dummy6_11eb0;
db dummy6_11eb1;
db dummy6_11eb2;
db dummy6_11eb3;
db dummy6_11eb4;
db dummy6_11eb5;
db dummy6_11eb6;
db dummy6_11eb7; // 10ed:0fe7
db unk_20498; // 10ed:0fe8
db dummy6_11eb9; // 10ed:0fe9
db unk_2049a; // 10ed:0fea
db dummy6_11ebb; // 10ed:0feb
db dummy6_11ebc; // 10ed:0fec
db dummy6_11ebd; // 10ed:0fed
db dummy6_11ebe;
db dummy6_11ebf;
db dummy6_11ec0;
db dummy6_11ec1;
db dummy6_11ec2;
db dummy6_11ec3;
db dummy6_11ec4;
db dummy6_11ec5;
db dummy6_11ec6; // 10ed:0ff6
db dummy6_11ec7; // 10ed:0ff7
db unk_204a8; // 10ed:0ff8
db dummy6_11ec9; // 10ed:0ff9
db unk_204aa; // 10ed:0ffa
db unk_204ab; // 10ed:0ffb
db dummy6_11ecc; // 10ed:0ffc
db dummy6_11ecd; // 10ed:0ffd
db dummy6_11ece;
db dummy6_11ecf;
db dummy6_11ed0;
db dummy6_11ed1;
db dummy6_11ed2;
db dummy6_11ed3;
db dummy6_11ed4;
db dummy6_11ed5;
db dummy6_11ed6; // 10ed:1006
db dummy6_11ed7; // 10ed:1007
db dummy6_11ed8; // 10ed:1008
db dummy6_11ed9; // 10ed:1009
db dummy6_11eda; // 10ed:100a
db unk_204bb; // 10ed:100b
db dummy6_11edc; // 10ed:100c
db dummy6_11edd; // 10ed:100d
db dummy6_11ede;
db dummy6_11edf;
db dummy6_11ee0;
db dummy6_11ee1;
db dummy6_11ee2;
db dummy6_11ee3;
db dummy6_11ee4;
db dummy6_11ee5;
db dummy6_11ee6; // 10ed:1016
db dummy6_11ee7; // 10ed:1017
db unk_204c8; // 10ed:1018
db dummy6_11ee9;
db unk_204ca; // 10ed:101a
db dummy6_11eeb; // 10ed:101b
db dummy6_11eec; // 10ed:101c
db dummy6_11eed; // 10ed:101d
db dummy6_11eee;
db dummy6_11eef;
db dummy6_11ef0;
db dummy6_11ef1;
db dummy6_11ef2;
db dummy6_11ef3;
db dummy6_11ef4;
db dummy6_11ef5;
db dummy6_11ef6; // 10ed:1026
db dummy6_11ef7;
db dummy6_11ef8; // 10ed:1028
db dummy6_11ef9; // 10ed:1029
db dummy6_11efa; // 10ed:102a
db dummy6_11efb; // 10ed:102b
db dummy6_11efc; // 10ed:102c
db dummy6_11efd; // 10ed:102d
db dummy6_11efe;
db dummy6_11eff;
db dummy6_11f00;
db dummy6_11f01;
db dummy6_11f02;
db dummy6_11f03;
db dummy6_11f04;
db dummy6_11f05;
db dummy6_11f06; // 10ed:1036
db dummy6_11f07;
db unk_204e8; // 10ed:1038
db dummy6_11f09; // 10ed:1039
db dummy6_11f0a; // 10ed:103a
db dummy6_11f0b; // 10ed:103b
db dummy6_11f0c; // 10ed:103c
db dummy6_11f0d; // 10ed:103d
db dummy6_11f0e;
db dummy6_11f0f;
db dummy6_11f10;
db dummy6_11f11;
db dummy6_11f12;
db dummy6_11f13;
db dummy6_11f14;
db dummy6_11f15;
db dummy6_11f16; // 10ed:1046
db dummy6_11f17;
db unk_204f8; // 10ed:1048
db dummy6_11f19; // 10ed:1049
db unk_204fa; // 10ed:104a
db dummy6_11f1b; // 10ed:104b
db dummy6_11f1c; // 10ed:104c
db dummy6_11f1d; // 10ed:104d
db dummy6_11f1e;
db dummy6_11f1f;
db dummy6_11f20;
db dummy6_11f21;
db dummy6_11f22;
db dummy6_11f23;
db dummy6_11f24;
db dummy6_11f25;
db dummy6_11f26; // 10ed:1056
db unk_20507; // 10ed:1057
db dummy6_11f28; // 10ed:1058
db dummy6_11f29; // 10ed:1059
db dummy6_11f2a; // 10ed:105a
db dummy6_11f2b; // 10ed:105b
db dummy6_11f2c; // 10ed:105c
db dummy6_11f2d; // 10ed:105d
db dummy6_11f2e;
db dummy6_11f2f;
db dummy6_11f30;
db dummy6_11f31;
db dummy6_11f32;
db dummy6_11f33;
db dummy6_11f34;
db dummy6_11f35;
db dummy6_11f36; // 10ed:1066
db unk_20517; // 10ed:1067
db dummy6_11f38[32]; // 10ed:1068
db dummy6_11f58[32]; // 10ed:1088
db dummy6_11f78[32]; // 10ed:10a8
db dummy6_11f98[32]; // 10ed:10c8
db dummy6_11fb8[32]; // 10ed:10e8
db dummy6_11fd8[32]; // 10ed:1108
db dummy6_11ff8; // 10ed:1128
db dummy6_11ff9; // 10ed:1129
db dummy6_11ffa;
db dummy6_11ffb;
db dummy6_11ffc;
db dummy6_11ffd; // 10ed:112d
db dummy6_11ffe; // 10ed:112e
db dummy6_11fff;
db dummy6_12000;
db dummy6_12001; // 10ed:1131
db dummy6_12002; // 10ed:1132
db dummy6_12003; // 10ed:1133
db dummy6_12004; // 10ed:1134
db dummy6_12005;
db dummy6_12006; // 10ed:1136
db dummy6_12007; // 10ed:1137
db dummy6_12008; // 10ed:1138
db dummy6_12009; // 10ed:1139
db dummy6_1200a; // 10ed:113a
db dummy6_1200b;
db dummy6_1200c;
db dummy6_1200d;
db dummy6_1200e; // 10ed:113e
db dummy6_1200f; // 10ed:113f
db dummy6_12010; // 10ed:1140
db unk_205f1; // 10ed:1141
db dummy6_12012; // 10ed:1142
db dummy6_12013; // 10ed:1143
db dummy6_12014; // 10ed:1144
db dummy6_12015; // 10ed:1145
db dummy6_12016; // 10ed:1146
db dummy6_12017; // 10ed:1147
db dummy6_12018; // 10ed:1148
db dummy6_12019; // 10ed:1149
db dummy6_1201a; // 10ed:114a
db dummy6_1201b; // 10ed:114b
db dummy6_1201c; // 10ed:114c
db dummy6_1201d; // 10ed:114d
dw word_205fe; // 10ed:114e
dw word_20600; // 10ed:1150
dw word_20602; // 10ed:1152
db unk_20604; // 10ed:1154
db dummy6_12025; // 10ed:1155
db unk_20606; // 10ed:1156
db dummy6_12027; // 10ed:1157
dw word_20608; // 10ed:1158
db dummy6_1202a;
db dummy6_1202b;
db dummy6_1202c; // 10ed:115c
db dummy6_1202d; // 10ed:115d
db dummy6_1202e; // 10ed:115e
db dummy6_1202f;
db dummy6_12030; // 10ed:1160
db dummy6_12031;
db dummy6_12032;
db dummy6_12033;
db dummy6_12034;
db dummy6_12035;
db dummy6_12036;
db dummy6_12037;
db dummy6_12038;
db dummy6_12039;
db dummy6_1203a;
db dummy6_1203b; // 10ed:116b
db dummy6_1203c;
db dummy6_1203d; // 10ed:116d
db dummy6_1203e;
db dummy6_1203f; // 10ed:116f
db dummy6_12040;
db dummy6_12041;
db dummy6_12042;
db dummy6_12043;
db dummy6_12044; // 10ed:1174
db dummy6_12045;
dw word_20626; // 10ed:1176
db unk_20628; // 10ed:1178
db unk_20629; // 10ed:1179
db dummy6_1204a;
db dummy6_1204b;
db dummy6_1204c;
db dummy6_1204d;
db dummy6_1204e;
db dummy6_1204f;
db dummy6_12050;
db dummy6_12051;
db dummy6_12052;
db dummy6_12053;
db dummy6_12054;
db dummy6_12055;
db dummy6_12056;
db dummy6_12057;
db dummy6_12058;
db dummy6_12059;
db dummy6_1205a;
db dummy6_1205b;
db dummy6_1205c;
db unk_2063d; // 10ed:118d
db dummy6_1205e[32]; // 10ed:118e
db dummy6_1207e;
db dummy6_1207f;
db dummy6_12080;
db dummy6_12081;
db dummy6_12082;
db dummy6_12083;
db dummy6_12084;
db dummy6_12085;
db dummy6_12086;
db dummy6_12087;
db dummy6_12088;
db dummy6_12089; // 10ed:11b9
db dummy6_1208a; // 10ed:11ba
db dummy6_1208b;
db byte_2066c; // 10ed:11bc
dw word_2066d; // 10ed:11bd
db dummy6_1208f; // 10ed:11bf
db dummy6_12090;
db dummy6_12091; // 10ed:11c1
db dummy6_12092;
db dummy6_12093; // 10ed:11c3
db dummy6_12094;
db dummy6_12095;
db dummy6_12096;
db dummy6_12097;
db dummy6_12098;
db byte_20679; // 10ed:11c9
db unk_2067a; // 10ed:11ca
db byte_2067b; // 10ed:11cb
db dummy6_1209c;
db dummy6_1209d;
db dummy6_1209e;
db dummy6_1209f; // 10ed:11cf
db unk_20680; // 10ed:11d0
db dummy6_120a1; // 10ed:11d1
db dummy6_120a2; // 10ed:11d2
db dummy6_120a3;
db dummy6_120a4;
db dummy6_120a5;
db dummy6_120a6;
db dummy6_120a7;
db dummy6_120a8;
db dummy6_120a9;
db dummy6_120aa;
db dummy6_120ab;
db dummy6_120ac;
db dummy6_120ad; // 10ed:11dd
db dummy6_120ae;
db dummy6_120af;
db dummy6_120b0;
db dummy6_120b1; // 10ed:11e1
db dummy6_120b2;
db dummy6_120b3; // 10ed:11e3
db dummy6_120b4;
db dummy6_120b5;
db dummy6_120b6;
db dummy6_120b7; // 10ed:11e7
db dummy6_120b8;
db dummy6_120b9; // 10ed:11e9
db dummy6_120ba; // 10ed:11ea
dw word_2069b; // 10ed:11eb
db dummy6_120bd; // 10ed:11ed
db dummy6_120be;
db dummy6_120bf; // 10ed:11ef
db dummy6_120c0;
db dummy6_120c1; // 10ed:11f1
db dummy6_120c2;
db dummy6_120c3; // 10ed:11f3
db dummy6_120c4;
db dummy6_120c5; // 10ed:11f5
db dummy6_120c6;
db dummy6_120c7; // 10ed:11f7
db unk_206a8; // 10ed:11f8
db dummy6_120c9; // 10ed:11f9
db dummy6_120ca;
db dummy6_120cb; // 10ed:11fb
db dummy6_120cc;
db dummy6_120cd; // 10ed:11fd
db dummy6_120ce;
db dummy6_120cf; // 10ed:11ff
db dummy6_120d0;
db unk_206b1; // 10ed:1201
db dummy6_120d2; // 10ed:1202
db dummy6_120d3; // 10ed:1203
db dummy6_120d4;
db dummy6_120d5; // 10ed:1205
db dummy6_120d6;
db dummy6_120d7; // 10ed:1207
db dummy6_120d8;
db dummy6_120d9; // 10ed:1209
db dummy6_120da;
db dummy6_120db;
db dummy6_120dc;
db dummy6_120dd; // 10ed:120d
db dummy6_120de;
db dummy6_120df; // 10ed:120f
db dummy6_120e0;
db unk_206c1; // 10ed:1211
db dummy6_120e2;
db dummy6_120e3; // 10ed:1213
db dummy6_120e4; // 10ed:1214
db dummy6_120e5; // 10ed:1215
db dummy6_120e6;
db unk_206c7; // 10ed:1217
db dummy6_120e8;
db dummy6_120e9; // 10ed:1219
db dummy6_120ea;
db dummy6_120eb; // 10ed:121b
db dummy6_120ec;
db unk_206cd; // 10ed:121d
db dummy6_120ee;
db dummy6_120ef; // 10ed:121f
db dummy6_120f0;
db dummy6_120f1; // 10ed:1221
db dummy6_120f2;
db dummy6_120f3; // 10ed:1223
db dummy6_120f4; // 10ed:1224
db dummy6_120f5; // 10ed:1225
db dummy6_120f6; // 10ed:1226
db dummy6_120f7;
db dummy6_120f8; // 10ed:1228
db dummy6_120f9;
db unk_206da; // 10ed:122a
db dummy6_120fb; // 10ed:122b
db dummy6_120fc;
db dummy6_120fd; // 10ed:122d
db unk_206de; // 10ed:122e
db dummy6_120ff; // 10ed:122f
db dummy6_12100;
db dummy6_12101;
db dummy6_12102;
db dummy6_12103; // 10ed:1233
db dummy6_12104; // 10ed:1234
db dummy6_12105; // 10ed:1235
db dummy6_12106;
db dummy6_12107; // 10ed:1237
db dummy6_12108;
db dummy6_12109; // 10ed:1239
db dummy6_1210a;
db dummy6_1210b;
db dummy6_1210c;
db dummy6_1210d; // 10ed:123d
db dummy6_1210e; // 10ed:123e
db dummy6_1210f; // 10ed:123f
db dummy6_12110;
db dummy6_12111;
db dummy6_12112;
db dummy6_12113; // 10ed:1243
db dummy6_12114; // 10ed:1244
db unk_206f5; // 10ed:1245
db dummy6_12116; // 10ed:1246
db unk_206f7; // 10ed:1247
db dummy6_12118; // 10ed:1248
db dummy6_12119;
db unk_206fa; // 10ed:124a
db dummy6_1211b; // 10ed:124b
db dummy6_1211c;
db dummy6_1211d; // 10ed:124d
db dummy6_1211e;
db dummy6_1211f;
db dummy6_12120; // 10ed:1250
db dummy6_12121;
db dummy6_12122; // 10ed:1252
db dummy6_12123; // 10ed:1253
db dummy6_12124; // 10ed:1254
db dummy6_12125; // 10ed:1255
db dummy6_12126;
db dummy6_12127; // 10ed:1257
db dummy6_12128;
db unk_20709; // 10ed:1259
db dummy6_1212a; // 10ed:125a
db dummy6_1212b; // 10ed:125b
db dummy6_1212c; // 10ed:125c
db dummy6_1212d; // 10ed:125d
db dummy6_1212e; // 10ed:125e
db dummy6_1212f;
db dummy6_12130;
db unk_20711; // 10ed:1261
db dummy6_12132[32]; // 10ed:1262
db dummy6_12152[32]; // 10ed:1282
db dummy6_12172[32]; // 10ed:12a2
db dummy6_12192[32]; // 10ed:12c2
db dummy6_121b2[32]; // 10ed:12e2
db dummy6_121d2[32]; // 10ed:1302
db dummy6_121f2[32]; // 10ed:1322
db dummy6_12212[32]; // 10ed:1342
db dummy6_12232[32]; // 10ed:1362
db dummy6_12252[32]; // 10ed:1382
db dummy6_12272[32]; // 10ed:13a2
db dummy6_12292; // 10ed:13c2
db dummy6_12293;
dw word_20874; // 10ed:13c4
dw dummy6_12296; // 10ed:13c6
dw dummy6_12298; // 10ed:13c8
dw dummy6_1229a; // 10ed:13ca
dw dummy6_1229c; // 10ed:13cc
dw dummy6_1229e; // 10ed:13ce
dw dummy6_122a0; // 10ed:13d0
dw dummy6_122a2; // 10ed:13d2
dw dummy6_122a4; // 10ed:13d4
dw dummy6_122a6; // 10ed:13d6
dw dummy6_122a8; // 10ed:13d8
dw dummy6_122aa; // 10ed:13da
dw dummy6_122ac; // 10ed:13dc
dw dummy6_122ae; // 10ed:13de
dw dummy6_122b0; // 10ed:13e0
dw dummy6_122b2; // 10ed:13e2
dw dummy6_122b4; // 10ed:13e4
dw dummy6_122b6; // 10ed:13e6
dw dummy6_122b8; // 10ed:13e8
dw dummy6_122ba; // 10ed:13ea
dw dummy6_122bc; // 10ed:13ec
dw dummy6_122be; // 10ed:13ee
dw dummy6_122c0; // 10ed:13f0
dw dummy6_122c2; // 10ed:13f2
dw dummy6_122c4; // 10ed:13f4
dw dummy6_122c6; // 10ed:13f6
dw dummy6_122c8; // 10ed:13f8
dw dummy6_122ca; // 10ed:13fa
dw dummy6_122cc; // 10ed:13fc
dw dummy6_122ce; // 10ed:13fe
dw dummy6_122d0; // 10ed:1400
dw dummy6_122d2; // 10ed:1402
dw dummy6_122d4; // 10ed:1404
dw dummy6_122d6; // 10ed:1406
dw dummy6_122d8; // 10ed:1408
dw dummy6_122da; // 10ed:140a
dw dummy6_122dc; // 10ed:140c
dw dummy6_122de; // 10ed:140e
dw dummy6_122e0; // 10ed:1410
dw dummy6_122e2; // 10ed:1412
dw dummy6_122e4; // 10ed:1414
dw dummy6_122e6; // 10ed:1416
dw dummy6_122e8; // 10ed:1418
dw dummy6_122ea; // 10ed:141a
dw dummy6_122ec; // 10ed:141c
dw dummy6_122ee; // 10ed:141e
dw dummy6_122f0; // 10ed:1420
dw dummy6_122f2; // 10ed:1422
dw dummy6_122f4; // 10ed:1424
dw dummy6_122f6; // 10ed:1426
dw dummy6_122f8; // 10ed:1428
dw dummy6_122fa; // 10ed:142a
dw dummy6_122fc; // 10ed:142c
dw dummy6_122fe; // 10ed:142e
dw dummy6_12300; // 10ed:1430
dw dummy6_12302; // 10ed:1432
dw dummy6_12304; // 10ed:1434
dw dummy6_12306; // 10ed:1436
dw dummy6_12308; // 10ed:1438
dw dummy6_1230a; // 10ed:143a
dw dummy6_1230c; // 10ed:143c
db dummy6_1230e;
db dummy6_1230f;
db dummy6_12310; // 10ed:1440
db dummy6_12311; // 10ed:1441
db dummy6_12312; // 10ed:1442
db dummy6_12313;
db dummy6_12314; // 10ed:1444
db dummy6_12315;
db dummy6_12316; // 10ed:1446
db dummy6_12317;
db dummy6_12318; // 10ed:1448
db dummy6_12319; // 10ed:1449
db dummy6_1231a; // 10ed:144a
db dummy6_1231b;
db _byte_208fc_loaded_sal_index; // 10ed:144c
db dummy6_1231d[32]; // 10ed:144d
db dummy6_1233d;
dw word_2091e; // 10ed:146e
db unk_20920; // 10ed:1470
db dummy6_12341[32]; // 10ed:1471
db dummy6_12361;
db dummy6_12362; // 10ed:1492
db dummy6_12363;
db dummy6_12364;
db dummy6_12365;
db dummy6_12366; // 10ed:1496
db dummy6_12367; // 10ed:1497
db unk_20948; // 10ed:1498
db dummy6_12369;
db dummy6_1236a; // 10ed:149a
db dummy6_1236b; // 10ed:149b
db dummy6_1236c; // 10ed:149c
db dummy6_1236d;
db dummy6_1236e; // 10ed:149e
db dummy6_1236f;
db dummy6_12370; // 10ed:14a0
db dummy6_12371;
db dummy6_12372; // 10ed:14a2
db dummy6_12373;
db unk_20954; // 10ed:14a4
db dummy6_12375;
db dummy6_12376; // 10ed:14a6
db dummy6_12377;
db dummy6_12378; // 10ed:14a8
db dummy6_12379;
db dummy6_1237a; // 10ed:14aa
db dummy6_1237b;
db dummy6_1237c; // 10ed:14ac
db dummy6_1237d;
db dummy6_1237e; // 10ed:14ae
db dummy6_1237f;
db dummy6_12380; // 10ed:14b0
db dummy6_12381;
db dummy6_12382; // 10ed:14b2
db dummy6_12383;
db unk_20964; // 10ed:14b4
db dummy6_12385[32]; // 10ed:14b5
db dummy6_123a5[32]; // 10ed:14d5
db dummy6_123c5[32]; // 10ed:14f5
db dummy6_123e5[32]; // 10ed:1515
db dummy6_12405[32]; // 10ed:1535
db dummy6_12425;
db unk_20a06; // 10ed:1556
db dummy6_12427[32]; // 10ed:1557
db dummy6_12447[32]; // 10ed:1577
db dummy6_12467;
db dummy6_12468; // 10ed:1598
db dummy6_12469;
db dummy6_1246a; // 10ed:159a
db dummy6_1246b;
db dummy6_1246c; // 10ed:159c
db dummy6_1246d;
db dummy6_1246e; // 10ed:159e
db dummy6_1246f; // 10ed:159f
db dummy6_12470; // 10ed:15a0
db dummy6_12471;
db dummy6_12472; // 10ed:15a2
db dummy6_12473; // 10ed:15a3
db dummy6_12474; // 10ed:15a4
db dummy6_12475; // 10ed:15a5
db dummy6_12476; // 10ed:15a6
db dummy6_12477; // 10ed:15a7
db dummy6_12478; // 10ed:15a8
db dummy6_12479; // 10ed:15a9
db unk_20a5a; // 10ed:15aa
db dummy6_1247b[32]; // 10ed:15ab
db dummy6_1249b[32]; // 10ed:15cb
db dummy6_124bb[32]; // 10ed:15eb
db dummy6_124db[32]; // 10ed:160b
db dummy6_124fb[32]; // 10ed:162b
db dummy6_1251b;
db dummy6_1251c; // 10ed:164c
db dummy6_1251d;
db dummy6_1251e; // 10ed:164e
db dummy6_1251f;
db dummy6_12520; // 10ed:1650
db dummy6_12521;
db dummy6_12522; // 10ed:1652
db dummy6_12523;
db dummy6_12524; // 10ed:1654
db dummy6_12525;
db dummy6_12526; // 10ed:1656
db dummy6_12527;
db dummy6_12528; // 10ed:1658
db dummy6_12529;
db unk_20b0a; // 10ed:165a
db dummy6_1252b[32]; // 10ed:165b
db dummy6_1254b[32]; // 10ed:167b
db dummy6_1256b[32]; // 10ed:169b
db dummy6_1258b[32]; // 10ed:16bb
db dummy6_125ab[32]; // 10ed:16db
db dummy6_125cb[32]; // 10ed:16fb
db dummy6_125eb[32]; // 10ed:171b
db dummy6_1260b;
db dummy6_1260c; // 10ed:173c
db dummy6_1260d;
db dummy6_1260e;
db dummy6_1260f; // 10ed:173f
db dummy6_12610; // 10ed:1740
db dummy6_12611; // 10ed:1741
db dummy6_12612; // 10ed:1742
db dummy6_12613; // 10ed:1743
db dummy6_12614; // 10ed:1744
db unk_20bf5; // 10ed:1745
db dummy6_12616[32]; // 10ed:1746
db dummy6_12636;
db dummy6_12637; // 10ed:1767
db dummy6_12638;
db dummy6_12639;
db dummy6_1263a; // 10ed:176a
db unk_20c1b; // 10ed:176b
db dummy6_1263c[32]; // 10ed:176c
db dummy6_1265c[32]; // 10ed:178c
db dummy6_1267c[32]; // 10ed:17ac
db dummy6_1269c[32]; // 10ed:17cc
db dummy6_126bc[32]; // 10ed:17ec
db dummy6_126dc[32]; // 10ed:180c
db dummy6_126fc[32]; // 10ed:182c
db dummy6_1271c[32]; // 10ed:184c
db dummy6_1273c[32]; // 10ed:186c
db dummy6_1275c[32]; // 10ed:188c
db dummy6_1277c[32]; // 10ed:18ac
db dummy6_1279c[32]; // 10ed:18cc
db dummy6_127bc;
db dummy6_127bd; // 10ed:18ed
db dummy6_127be;
db dummy6_127bf; // 10ed:18ef
db dummy6_127c0;
db dummy6_127c1; // 10ed:18f1
db dummy6_127c2; // 10ed:18f2
db unk_20da3; // 10ed:18f3
db dummy6_127c4;
db unk_20da5; // 10ed:18f5
db dummy6_127c6[32]; // 10ed:18f6
db dummy6_127e6[32]; // 10ed:1916
db dummy6_12806[32]; // 10ed:1936
db dummy6_12826[32]; // 10ed:1956
db dummy6_12846; // 10ed:1976
db dummy6_12847; // 10ed:1977
db dummy6_12848; // 10ed:1978
db dummy6_12849; // 10ed:1979
db dummy6_1284a; // 10ed:197a
db dummy6_1284b; // 10ed:197b
dw word_20e2c; // 10ed:197c
dw word_20e2e; // 10ed:197e
dw word_20e30; // 10ed:1980
dw word_20e32; // 10ed:1982
db dummy6_12854[32]; // 10ed:1984
db dummy6_12874[32]; // 10ed:19a4
db dummy6_12894[32]; // 10ed:19c4
db dummy6_128b4[32]; // 10ed:19e4
db dummy6_128d4; // 10ed:1a04
db dummy6_128d5; // 10ed:1a05
db dummy6_128d6; // 10ed:1a06
db dummy6_128d7; // 10ed:1a07
db dummy6_128d8; // 10ed:1a08
db dummy6_128d9;
db dummy6_128da; // 10ed:1a0a
db dummy6_128db;
db dummy6_128dc; // 10ed:1a0c
db dummy6_128dd;
db dummy6_128de; // 10ed:1a0e
db unk_20ebf; // 10ed:1a0f
db dummy6_128e0[32]; // 10ed:1a10
db dummy6_12900[32]; // 10ed:1a30
db dummy6_12920[32]; // 10ed:1a50
db dummy6_12940[32]; // 10ed:1a70
db dummy6_12960[32]; // 10ed:1a90
db dummy6_12980[32]; // 10ed:1ab0
db dummy6_129a0; // 10ed:1ad0
db dummy6_129a1; // 10ed:1ad1
db dummy6_129a2; // 10ed:1ad2
db dummy6_129a3; // 10ed:1ad3
db dummy6_129a4; // 10ed:1ad4
db dummy6_129a5; // 10ed:1ad5
db dummy6_129a6; // 10ed:1ad6
db dummy6_129a7; // 10ed:1ad7
db dummy6_129a8; // 10ed:1ad8
db dummy6_129a9; // 10ed:1ad9
db dummy6_129aa; // 10ed:1ada
db dummy6_129ab; // 10ed:1adb
db dummy6_129ac; // 10ed:1adc
db dummy6_129ad; // 10ed:1add
db dummy6_129ae; // 10ed:1ade
db dummy6_129af; // 10ed:1adf
db dummy6_129b0; // 10ed:1ae0
db dummy6_129b1; // 10ed:1ae1
db dummy6_129b2; // 10ed:1ae2
db dummy6_129b3; // 10ed:1ae3
db unk_20f94; // 10ed:1ae4
db dummy6_129b5;
db unk_20f96; // 10ed:1ae6
db dummy6_129b7;
db dummy6_129b8; // 10ed:1ae8
db dummy6_129b9;
db dummy6_129ba; // 10ed:1aea
db dummy6_129bb;
db dummy6_129bc; // 10ed:1aec
db dummy6_129bd;
db dummy6_129be;
db dummy6_129bf;
db dummy6_129c0; // 10ed:1af0
db dummy6_129c1; // 10ed:1af1
db dummy6_129c2; // 10ed:1af2
db dummy6_129c3; // 10ed:1af3
db unk_20fa4; // 10ed:1af4
db dummy6_129c5;
db dummy6_129c6; // 10ed:1af6
db dummy6_129c7;
db dummy6_129c8;
db dummy6_129c9;
db dummy6_129ca; // 10ed:1afa
db dummy6_129cb;
db dummy6_129cc;
db dummy6_129cd;
dw word_20fae; // 10ed:1afe
db dummy6_129d0[32]; // 10ed:1b00
db dummy6_129f0[32]; // 10ed:1b20
db dummy6_12a10; // 10ed:1b40
db dummy6_12a11;
db dummy6_12a12;
db dummy6_12a13;
db dummy6_12a14; // 10ed:1b44
db dummy6_12a15;
db dummy6_12a16; // 10ed:1b46
db dummy6_12a17; // 10ed:1b47
db byte_20ff8; // 10ed:1b48
db dummy6_12a19;
db dummy6_12a1a; // 10ed:1b4a
db dummy6_12a1b;
db dummy6_12a1c; // 10ed:1b4c
db dummy6_12a1d;
db dummy6_12a1e; // 10ed:1b4e
db dummy6_12a1f;
db dummy6_12a20; // 10ed:1b50
db dummy6_12a21;
db dummy6_12a22; // 10ed:1b52
db dummy6_12a23;
db dummy6_12a24; // 10ed:1b54
db dummy6_12a25; // 10ed:1b55
db unk_21006; // 10ed:1b56
db dummy6_12a27[32]; // 10ed:1b57
db dummy6_12a47;
db dummy6_12a48; // 10ed:1b78
db dummy6_12a49;
db dummy6_12a4a; // 10ed:1b7a
db dummy6_12a4b;
db dummy6_12a4c; // 10ed:1b7c
db dummy6_12a4d;
db dummy6_12a4e; // 10ed:1b7e
db dummy6_12a4f; // 10ed:1b7f
db dummy6_12a50; // 10ed:1b80
db dummy6_12a51;
db dummy6_12a52; // 10ed:1b82
db dummy6_12a53;
db dummy6_12a54; // 10ed:1b84
db dummy6_12a55;
db dummy6_12a56; // 10ed:1b86
db dummy6_12a57;
db dummy6_12a58; // 10ed:1b88
db dummy6_12a59;
db dummy6_12a5a; // 10ed:1b8a
db dummy6_12a5b;
db dummy6_12a5c; // 10ed:1b8c
db dummy6_12a5d; // 10ed:1b8d
db unk_2103e; // 10ed:1b8e
db dummy6_12a5f[32]; // 10ed:1b8f
db dummy6_12a7f[32]; // 10ed:1baf
db dummy6_12a9f;
db dummy6_12aa0; // 10ed:1bd0
db dummy6_12aa1; // 10ed:1bd1
db dummy6_12aa2; // 10ed:1bd2
db dummy6_12aa3; // 10ed:1bd3
db dummy6_12aa4;
db dummy6_12aa5;
db dummy6_12aa6;
db dummy6_12aa7;
db dummy6_12aa8;
db dummy6_12aa9;
db dummy6_12aaa;
db dummy6_12aab;
db dummy6_12aac;
db dummy6_12aad;
db dummy6_12aae; // 10ed:1bde
db dummy6_12aaf; // 10ed:1bdf
db dummy6_12ab0; // 10ed:1be0
db dummy6_12ab1; // 10ed:1be1
db unk_21092; // 10ed:1be2
db dummy6_12ab3;
dw word_21094; // 10ed:1be4
db dummy6_12ab6;
db dummy6_12ab7;
db dummy6_12ab8;
db dummy6_12ab9;
dw word_2109a; // 10ed:1bea
db dummy6_12abc; // 10ed:1bec
db dummy6_12abd; // 10ed:1bed
db dummy6_12abe; // 10ed:1bee
db dummy6_12abf; // 10ed:1bef
db unk_210a0; // 10ed:1bf0
db dummy6_12ac1;
db unk_210a2; // 10ed:1bf2
db dummy6_12ac3;
db dummy6_12ac4;
db dummy6_12ac5;
db dummy6_12ac6;
db dummy6_12ac7;
dw word_210a8; // 10ed:1bf8
db dummy6_12aca; // 10ed:1bfa
db dummy6_12acb; // 10ed:1bfb
db dummy6_12acc; // 10ed:1bfc
db dummy6_12acd; // 10ed:1bfd
db dummy6_12ace;
db dummy6_12acf;
db dummy6_12ad0;
db dummy6_12ad1;
db dummy6_12ad2; // 10ed:1c02
db dummy6_12ad3; // 10ed:1c03
db dummy6_12ad4; // 10ed:1c04
db dummy6_12ad5;
dw word_210b6; // 10ed:1c06
db dummy6_12ad8[32]; // 10ed:1c08
db dummy6_12af8;
db dummy6_12af9;
db dummy6_12afa; // 10ed:1c2a
db dummy6_12afb;
db dummy6_12afc; // 10ed:1c2c
db dummy6_12afd;
db dummy6_12afe; // 10ed:1c2e
db dummy6_12aff;
db byte_210e0; // 10ed:1c30
db dummy6_12b01[32]; // 10ed:1c31
db dummy6_12b21[32]; // 10ed:1c51
db dummy6_12b41;
db dummy6_12b42;
db dummy6_12b43;
db dummy6_12b44; // 10ed:1c74
db dummy6_12b45; // 10ed:1c75
db unk_21126; // 10ed:1c76
db dummy6_12b47[32]; // 10ed:1c77
db dummy6_12b67[32]; // 10ed:1c97
db dummy6_12b87[32]; // 10ed:1cb7
db dummy6_12ba7[32]; // 10ed:1cd7
db dummy6_12bc7[32]; // 10ed:1cf7
db dummy6_12be7;
db dummy6_12be8;
db dummy6_12be9;
db dummy6_12bea; // 10ed:1d1a
db dummy6_12beb;
db dummy6_12bec; // 10ed:1d1c
db dummy6_12bed; // 10ed:1d1d
db unk_211ce; // 10ed:1d1e
db dummy6_12bef[32]; // 10ed:1d1f
db dummy6_12c0f[32]; // 10ed:1d3f
db dummy6_12c2f[32]; // 10ed:1d5f
db dummy6_12c4f[32]; // 10ed:1d7f
db dummy6_12c6f[32]; // 10ed:1d9f
db dummy6_12c8f;
db dummy6_12c90;
db dummy6_12c91;
db dummy6_12c92; // 10ed:1dc2
db dummy6_12c93; // 10ed:1dc3
db dummy6_12c94; // 10ed:1dc4
db dummy6_12c95; // 10ed:1dc5
db unk_21276; // 10ed:1dc6
db dummy6_12c97[32]; // 10ed:1dc7
db dummy6_12cb7[32]; // 10ed:1de7
db dummy6_12cd7; // 10ed:1e07
db dummy6_12cd8; // 10ed:1e08
db dummy6_12cd9;
db dummy6_12cda; // 10ed:1e0a
db dummy6_12cdb; // 10ed:1e0b
db dummy6_12cdc; // 10ed:1e0c
db dummy6_12cdd;
db dummy6_12cde; // 10ed:1e0e
db dummy6_12cdf;
db dummy6_12ce0; // 10ed:1e10
db dummy6_12ce1;
db dummy6_12ce2; // 10ed:1e12
db dummy6_12ce3;
db dummy6_12ce4; // 10ed:1e14
db dummy6_12ce5;
db dummy6_12ce6; // 10ed:1e16
db dummy6_12ce7;
db dummy6_12ce8; // 10ed:1e18
db dummy6_12ce9; // 10ed:1e19
db unk_212ca; // 10ed:1e1a
db dummy6_12ceb[32]; // 10ed:1e1b
db dummy6_12d0b[32]; // 10ed:1e3b
db dummy6_12d2b;
db dummy6_12d2c; // 10ed:1e5c
db dummy6_12d2d; // 10ed:1e5d
db dummy6_12d2e; // 10ed:1e5e
db dummy6_12d2f; // 10ed:1e5f
db dummy6_12d30; // 10ed:1e60
db dummy6_12d31;
db dummy6_12d32; // 10ed:1e62
db dummy6_12d33;
db dummy6_12d34; // 10ed:1e64
db dummy6_12d35; // 10ed:1e65
db dummy6_12d36; // 10ed:1e66
db dummy6_12d37;
db dummy6_12d38; // 10ed:1e68
db dummy6_12d39;
db dummy6_12d3a; // 10ed:1e6a
db dummy6_12d3b;
db dummy6_12d3c; // 10ed:1e6c
db dummy6_12d3d; // 10ed:1e6d
db unk_2131e; // 10ed:1e6e
db dummy6_12d3f;
db dummy6_12d40; // 10ed:1e70
db dummy6_12d41;
db dummy6_12d42; // 10ed:1e72
db dummy6_12d43;
db dummy6_12d44; // 10ed:1e74
db dummy6_12d45;
db unk_21326; // 10ed:1e76
db dummy6_12d47[32]; // 10ed:1e77
db dummy6_12d67[32]; // 10ed:1e97
db dummy6_12d87[32]; // 10ed:1eb7
db dummy6_12da7[32]; // 10ed:1ed7
db dummy6_12dc7;
db dummy6_12dc8;
db dummy6_12dc9;
db dummy6_12dca; // 10ed:1efa
db dummy6_12dcb;
db dummy6_12dcc; // 10ed:1efc
db dummy6_12dcd;
db dummy6_12dce; // 10ed:1efe
db dummy6_12dcf;
db dummy6_12dd0; // 10ed:1f00
db dummy6_12dd1;
db dummy6_12dd2; // 10ed:1f02
db dummy6_12dd3;
db dummy6_12dd4; // 10ed:1f04
db dummy6_12dd5;
db unk_213b6; // 10ed:1f06
db dummy6_12dd7[32]; // 10ed:1f07
db dummy6_12df7[32]; // 10ed:1f27
db dummy6_12e17[32]; // 10ed:1f47
db dummy6_12e37;
db dummy6_12e38;
db dummy6_12e39;
db dummy6_12e3a;
db dummy6_12e3b;
db dummy6_12e3c;
db dummy6_12e3d;
db dummy6_12e3e;
db dummy6_12e3f;
db dummy6_12e40;
db dummy6_12e41;
db dummy6_12e42;
db dummy6_12e43;
db dummy6_12e44;
db dummy6_12e45;
db dummy6_12e46;
db dummy6_12e47;
db dummy6_12e48;
db dummy6_12e49;
db dummy6_12e4a; // 10ed:1f7a
db dummy6_12e4b;
db dummy6_12e4c;
db dummy6_12e4d;
db unk_2142e; // 10ed:1f7e
db dummy6_12e4f[32]; // 10ed:1f7f
db dummy6_12e6f;
db dummy6_12e70; // 10ed:1fa0
db dummy6_12e71;
db dummy6_12e72; // 10ed:1fa2
db dummy6_12e73; // 10ed:1fa3
db dummy6_12e74; // 10ed:1fa4
db dummy6_12e75;
db dummy6_12e76; // 10ed:1fa6
db dummy6_12e77; // 10ed:1fa7
db dummy6_12e78; // 10ed:1fa8
db dummy6_12e79;
db dummy6_12e7a; // 10ed:1faa
db dummy6_12e7b; // 10ed:1fab
db dummy6_12e7c;
db dummy6_12e7d;
db unk_2145e; // 10ed:1fae
db dummy6_12e7f;
db dummy6_12e80; // 10ed:1fb0
db dummy6_12e81;
db dummy6_12e82; // 10ed:1fb2
db dummy6_12e83; // 10ed:1fb3
db dummy6_12e84; // 10ed:1fb4
db dummy6_12e85;
db dummy6_12e86; // 10ed:1fb6
db dummy6_12e87; // 10ed:1fb7
db dummy6_12e88;
db dummy6_12e89;
db dummy6_12e8a; // 10ed:1fba
db dummy6_12e8b;
db dummy6_12e8c; // 10ed:1fbc
db dummy6_12e8d;
db dummy6_12e8e; // 10ed:1fbe
db dummy6_12e8f; // 10ed:1fbf
db dummy6_12e90;
db dummy6_12e91;
db unk_21472; // 10ed:1fc2
db dummy6_12e93[32]; // 10ed:1fc3
db dummy6_12eb3[32]; // 10ed:1fe3
db dummy6_12ed3; // 10ed:2003
db dummy6_12ed4; // 10ed:2004
db dummy6_12ed5;
db dummy6_12ed6; // 10ed:2006
db dummy6_12ed7; // 10ed:2007
db dummy6_12ed8; // 10ed:2008
db dummy6_12ed9;
db unk_214ba; // 10ed:200a
db dummy6_12edb; // 10ed:200b
db dummy6_12edc; // 10ed:200c
db dummy6_12edd;
db dummy6_12ede; // 10ed:200e
db dummy6_12edf; // 10ed:200f
db dummy6_12ee0;
db dummy6_12ee1;
db unk_214c2; // 10ed:2012
db dummy6_12ee3;
db dummy6_12ee4; // 10ed:2014
db dummy6_12ee5;
db dummy6_12ee6; // 10ed:2016
db dummy6_12ee7; // 10ed:2017
db dummy6_12ee8;
db dummy6_12ee9;
db unk_214ca; // 10ed:201a
db dummy6_12eeb;
db dummy6_12eec; // 10ed:201c
db dummy6_12eed; // 10ed:201d
db dummy6_12eee; // 10ed:201e
db dummy6_12eef; // 10ed:201f
db dummy6_12ef0; // 10ed:2020
db dummy6_12ef1; // 10ed:2021
db dummy6_12ef2; // 10ed:2022
db dummy6_12ef3; // 10ed:2023
db dummy6_12ef4; // 10ed:2024
db dummy6_12ef5; // 10ed:2025
db dummy6_12ef6; // 10ed:2026
db dummy6_12ef7; // 10ed:2027
db dummy6_12ef8; // 10ed:2028
db dummy6_12ef9;
db dummy6_12efa; // 10ed:202a
db dummy6_12efb; // 10ed:202b
db dummy6_12efc; // 10ed:202c
db dummy6_12efd;
db dummy6_12efe; // 10ed:202e
db dummy6_12eff; // 10ed:202f
db dummy6_12f00;
db dummy6_12f01;
db unk_214e2; // 10ed:2032
db dummy6_12f03;
db unk_214e4; // 10ed:2034
db dummy6_12f05[32]; // 10ed:2035
db dummy6_12f25;
db dummy6_12f26; // 10ed:2056
db dummy6_12f27; // 10ed:2057
db dummy6_12f28; // 10ed:2058
db dummy6_12f29;
db dummy6_12f2a; // 10ed:205a
db dummy6_12f2b; // 10ed:205b
db dummy6_12f2c; // 10ed:205c
db dummy6_12f2d;
db dummy6_12f2e; // 10ed:205e
db dummy6_12f2f; // 10ed:205f
db dummy6_12f30;
db dummy6_12f31;
db dummy6_12f32; // 10ed:2062
db dummy6_12f33;
db dummy6_12f34; // 10ed:2064
db dummy6_12f35; // 10ed:2065
db dummy6_12f36; // 10ed:2066
db dummy6_12f37; // 10ed:2067
db dummy6_12f38;
db dummy6_12f39;
db unk_2151a; // 10ed:206a
db dummy6_12f3b[32]; // 10ed:206b
db dummy6_12f5b;
db dummy6_12f5c; // 10ed:208c
db dummy6_12f5d; // 10ed:208d
db dummy6_12f5e; // 10ed:208e
db dummy6_12f5f; // 10ed:208f
db dummy6_12f60; // 10ed:2090
db dummy6_12f61; // 10ed:2091
db dummy6_12f62; // 10ed:2092
db dummy6_12f63; // 10ed:2093
db dummy6_12f64; // 10ed:2094
db dummy6_12f65; // 10ed:2095
db dummy6_12f66; // 10ed:2096
db dummy6_12f67; // 10ed:2097
db dummy6_12f68; // 10ed:2098
db dummy6_12f69; // 10ed:2099
db dummy6_12f6a; // 10ed:209a
db dummy6_12f6b; // 10ed:209b
db dummy6_12f6c; // 10ed:209c
db dummy6_12f6d;
db dummy6_12f6e; // 10ed:209e
db dummy6_12f6f; // 10ed:209f
db dummy6_12f70;
db dummy6_12f71;
db unk_21552; // 10ed:20a2
db dummy6_12f73;
db dummy6_12f74; // 10ed:20a4
db dummy6_12f75;
db dummy6_12f76; // 10ed:20a6
db dummy6_12f77; // 10ed:20a7
db dummy6_12f78; // 10ed:20a8
db dummy6_12f79;
db dummy6_12f7a; // 10ed:20aa
db dummy6_12f7b; // 10ed:20ab
db dummy6_12f7c; // 10ed:20ac
db dummy6_12f7d;
db dummy6_12f7e; // 10ed:20ae
db dummy6_12f7f; // 10ed:20af
db dummy6_12f80; // 10ed:20b0
db dummy6_12f81;
db dummy6_12f82; // 10ed:20b2
db dummy6_12f83; // 10ed:20b3
db dummy6_12f84;
db dummy6_12f85;
db unk_21566; // 10ed:20b6
db dummy6_12f87[32]; // 10ed:20b7
db dummy6_12fa7[32]; // 10ed:20d7
db dummy6_12fc7[32]; // 10ed:20f7
db dummy6_12fe7; // 10ed:2117
db dummy6_12fe8; // 10ed:2118
db dummy6_12fe9;
db dummy6_12fea; // 10ed:211a
db dummy6_12feb; // 10ed:211b
dw word_215cc; // 10ed:211c
db dummy6_12fee; // 10ed:211e
db dummy6_12fef; // 10ed:211f
db dummy6_12ff0;
db dummy6_12ff1;
db unk_215d2; // 10ed:2122
db dummy6_12ff3;
db dummy6_12ff4; // 10ed:2124
db dummy6_12ff5;
db dummy6_12ff6; // 10ed:2126
db dummy6_12ff7; // 10ed:2127
db dummy6_12ff8; // 10ed:2128
db dummy6_12ff9;
db dummy6_12ffa; // 10ed:212a
db dummy6_12ffb; // 10ed:212b
db dummy6_12ffc;
db dummy6_12ffd;
db unk_215de; // 10ed:212e
db dummy6_12fff[32]; // 10ed:212f
db dummy6_1301f[32]; // 10ed:214f
db dummy6_1303f[32]; // 10ed:216f
db dummy6_1305f[32]; // 10ed:218f
db dummy6_1307f[32]; // 10ed:21af
db dummy6_1309f;
db dummy6_130a0;
db dummy6_130a1;
db dummy6_130a2;
db dummy6_130a3;
db dummy6_130a4;
db dummy6_130a5;
db dummy6_130a6;
db dummy6_130a7;
db dummy6_130a8;
db dummy6_130a9;
dw word_2168a; // 10ed:21da
db dummy6_130ac; // 10ed:21dc
db dummy6_130ad;
db dummy6_130ae; // 10ed:21de
db dummy6_130af; // 10ed:21df
db unk_21690; // 10ed:21e0
db dummy6_130b1;
db dummy6_130b2; // 10ed:21e2
db dummy6_130b3; // 10ed:21e3
db dummy6_130b4; // 10ed:21e4
db dummy6_130b5;
db dummy6_130b6; // 10ed:21e6
db dummy6_130b7; // 10ed:21e7
db dummy6_130b8; // 10ed:21e8
db dummy6_130b9;
db dummy6_130ba; // 10ed:21ea
db dummy6_130bb; // 10ed:21eb
db dummy6_130bc; // 10ed:21ec
db dummy6_130bd;
db dummy6_130be; // 10ed:21ee
db dummy6_130bf; // 10ed:21ef
db unk_216a0; // 10ed:21f0
db dummy6_130c1;
db dummy6_130c2; // 10ed:21f2
db dummy6_130c3; // 10ed:21f3
db unk_216a4; // 10ed:21f4
db dummy6_130c5;
db dummy6_130c6; // 10ed:21f6
db dummy6_130c7; // 10ed:21f7
db dummy6_130c8; // 10ed:21f8
db dummy6_130c9;
db dummy6_130ca; // 10ed:21fa
db dummy6_130cb; // 10ed:21fb
db unk_216ac; // 10ed:21fc
db dummy6_130cd;
db dummy6_130ce; // 10ed:21fe
db dummy6_130cf; // 10ed:21ff
db unk_216b0; // 10ed:2200
db dummy6_130d1;
db dummy6_130d2; // 10ed:2202
db dummy6_130d3; // 10ed:2203
db unk_216b4; // 10ed:2204
db dummy6_130d5;
db dummy6_130d6; // 10ed:2206
db dummy6_130d7; // 10ed:2207
db dummy6_130d8; // 10ed:2208
db dummy6_130d9;
db dummy6_130da; // 10ed:220a
db dummy6_130db; // 10ed:220b
db unk_216bc; // 10ed:220c
db dummy6_130dd;
db dummy6_130de; // 10ed:220e
db dummy6_130df; // 10ed:220f
db dummy6_130e0; // 10ed:2210
db dummy6_130e1;
db dummy6_130e2; // 10ed:2212
db dummy6_130e3; // 10ed:2213
db unk_216c4; // 10ed:2214
db dummy6_130e5;
db dummy6_130e6; // 10ed:2216
db dummy6_130e7; // 10ed:2217
db unk_216c8; // 10ed:2218
db dummy6_130e9;
db dummy6_130ea; // 10ed:221a
db dummy6_130eb; // 10ed:221b
db dummy6_130ec; // 10ed:221c
db dummy6_130ed;
db dummy6_130ee; // 10ed:221e
db dummy6_130ef; // 10ed:221f
dw word_216d0; // 10ed:2220
dw word_216d2; // 10ed:2222
db dummy6_130f4; // 10ed:2224
db dummy6_130f5;
db dummy6_130f6; // 10ed:2226
db dummy6_130f7;
db dummy6_130f8; // 10ed:2228
db dummy6_130f9;
db dummy6_130fa; // 10ed:222a
db dummy6_130fb;
db dummy6_130fc; // 10ed:222c
db dummy6_130fd;
db dummy6_130fe; // 10ed:222e
db dummy6_130ff;
db dummy6_13100; // 10ed:2230
db dummy6_13101;
db dummy6_13102; // 10ed:2232
db dummy6_13103;
db dummy6_13104; // 10ed:2234
db dummy6_13105;
db dummy6_13106; // 10ed:2236
db dummy6_13107;
db dummy6_13108; // 10ed:2238
db dummy6_13109;
db dummy6_1310a; // 10ed:223a
db dummy6_1310b;
db unk_216ec; // 10ed:223c
db dummy6_1310d;
db dummy6_1310e;
db dummy6_1310f;
db dummy6_13110; // 10ed:2240
db dummy6_13111; // 10ed:2241
db dummy6_13112; // 10ed:2242
db dummy6_13113;
db unk_216f4; // 10ed:2244
db dummy6_13115;
db dummy6_13116;
db dummy6_13117;
db dummy6_13118; // 10ed:2248
db dummy6_13119;
db dummy6_1311a; // 10ed:224a
db dummy6_1311b;
db unk_216fc; // 10ed:224c
db dummy6_1311d;
db dummy6_1311e;
db dummy6_1311f;
db dummy6_13120; // 10ed:2250
db dummy6_13121; // 10ed:2251
db dummy6_13122; // 10ed:2252
db dummy6_13123;
db unk_21704; // 10ed:2254
db dummy6_13125;
db unk_21706; // 10ed:2256
db dummy6_13127;
db dummy6_13128; // 10ed:2258
db dummy6_13129;
db dummy6_1312a; // 10ed:225a
db dummy6_1312b;
db dummy6_1312c; // 10ed:225c
dw word_2170d; // 10ed:225d
db dummy6_1312f; // 10ed:225f
db dummy6_13130; // 10ed:2260
db dummy6_13131; // 10ed:2261
db dummy6_13132; // 10ed:2262
db dummy6_13133; // 10ed:2263
db dummy6_13134; // 10ed:2264
db unk_21715; // 10ed:2265
db dummy6_13136;
db dummy6_13137;
db dummy6_13138;
db dummy6_13139; // 10ed:2269
db dummy6_1313a; // 10ed:226a
db dummy6_1313b; // 10ed:226b
db dummy6_1313c;
db dummy6_1313d; // 10ed:226d
db dummy6_1313e;
db dummy6_1313f; // 10ed:226f
db dummy6_13140; // 10ed:2270
db dummy6_13141; // 10ed:2271
db dummy6_13142; // 10ed:2272
db dummy6_13143; // 10ed:2273
db dummy6_13144; // 10ed:2274
db dummy6_13145;
db dummy6_13146;
db dummy6_13147; // 10ed:2277
db dummy6_13148;
db dummy6_13149; // 10ed:2279
db dummy6_1314a; // 10ed:227a
db dummy6_1314b; // 10ed:227b
db dummy6_1314c;
db byte_2172d; // 10ed:227d
db dummy6_1314e; // 10ed:227e
db dummy6_1314f; // 10ed:227f
db asc_21730[12]; // 10ed:2280
db dummy6_1315c; // 10ed:2280
db dummy6_1315d[4]; // 10ed:2280
db dummy6_13161;
db dummy6_13162; // 10ed:2292
db dummy6_13163;
db dummy6_13164; // 10ed:2294
db dummy6_13165;
db dummy6_13166; // 10ed:2296
db dummy6_13167; // 10ed:2297
db unk_21748; // 10ed:2298
db dummy6_13169;
db dummy6_1316a; // 10ed:229a
db dummy6_1316b;
db dummy6_1316c; // 10ed:229c
db dummy6_1316d;
db dummy6_1316e; // 10ed:229e
db dummy6_1316f; // 10ed:229f
db dummy6_13170; // 10ed:22a0
db dummy6_13171; // 10ed:22a1
db dummy6_13172; // 10ed:22a2
db dummy6_13173; // 10ed:22a3
db dummy6_13174; // 10ed:22a4
db dummy6_13175; // 10ed:22a5
dw word_21756; // 10ed:22a6
db dummy6_13178; // 10ed:22a8
db dummy6_13179; // 10ed:22a9
db dummy6_1317a; // 10ed:22aa
db dummy6_1317b; // 10ed:22ab
db dummy6_1317c; // 10ed:22ac
db dummy6_1317d; // 10ed:22ad
db dummy6_1317e; // 10ed:22ae
db dummy6_1317f; // 10ed:22af
db dummy6_13180; // 10ed:22b0
db dummy6_13181; // 10ed:22b1
db dummy6_13182; // 10ed:22b2
db dummy6_13183; // 10ed:22b3
db dummy6_13184; // 10ed:22b4
db dummy6_13185; // 10ed:22b5
db dummy6_13186; // 10ed:22b6
db dummy6_13187; // 10ed:22b7
db dummy6_13188; // 10ed:22b8
dw word_21769; // 10ed:22b9
dw dummy6_1318b; // 10ed:22bb
dw dummy6_1318d; // 10ed:22bd
dw dummy6_1318f; // 10ed:22bf
dw dummy6_13191; // 10ed:22c1
dw dummy6_13193; // 10ed:22c3
dw dummy6_13195; // 10ed:22c5
dw dummy6_13197; // 10ed:22c7
dw dummy6_13199; // 10ed:22c9
dw dummy6_1319b; // 10ed:22cb
db dummy6_1319d; // 10ed:22cd
db dummy6_1319e; // 10ed:22ce
db dummy6_1319f; // 10ed:22cf
db dummy6_131a0; // 10ed:22d0
db dummy6_131a1; // 10ed:22d1
db dummy6_131a2; // 10ed:22d2
db dummy6_131a3; // 10ed:22d3
db dummy6_131a4; // 10ed:22d4
db dummy6_131a5; // 10ed:22d5
db dummy6_131a6; // 10ed:22d6
db dummy6_131a7; // 10ed:22d7
db dummy6_131a8; // 10ed:22d8
dw word_21789; // 10ed:22d9
dw word_2178b; // 10ed:22db
dw word_2178d; // 10ed:22dd
dw word_2178f; // 10ed:22df
db dummy6_131b1; // 10ed:22e1
db dummy6_131b2; // 10ed:22e2
db byte_21793; // 10ed:22e3
db unk_21794; // 10ed:22e4
db dummy6_131b5;
db dummy6_131b6; // 10ed:22e6
db dummy6_131b7;
db dummy6_131b8; // 10ed:22e8
db dummy6_131b9;
db dummy6_131ba; // 10ed:22ea
db dummy6_131bb; // 10ed:22eb
db dummy6_131bc; // 10ed:22ec
db dummy6_131bd;
db dummy6_131be; // 10ed:22ee
db dummy6_131bf;
db dummy6_131c0; // 10ed:22f0
db dummy6_131c1; // 10ed:22f1
db dummy6_131c2; // 10ed:22f2
db dummy6_131c3;
db unk_217a4; // 10ed:22f4
db dummy6_131c5;
db dummy6_131c6; // 10ed:22f6
db dummy6_131c7;
db dummy6_131c8; // 10ed:22f8
db dummy6_131c9; // 10ed:22f9
db dummy6_131ca; // 10ed:22fa
db dummy6_131cb;
db unk_217ac; // 10ed:22fc
char alim1_hsq[9]; // 10ed:22fd
db dummy6_131d6[32]; // 10ed:2306
db dummy6_131f6[32]; // 10ed:2326
db dummy6_13216[32]; // 10ed:2346
db dummy6_13236[32]; // 10ed:2366
db dummy6_13256[32]; // 10ed:2386
db dummy6_13276[32]; // 10ed:23a6
db dummy6_13296[32]; // 10ed:23c6
db dummy6_132b6[32]; // 10ed:23e6
dw word_218b6; // 10ed:2406
db dummy6_132d8;
db dummy6_132d9;
db dummy6_132da;
db dummy6_132db;
db dummy6_132dc; // 10ed:240c
db dummy6_132dd; // 10ed:240d
db dummy6_132de; // 10ed:240e
db dummy6_132df;
db dummy6_132e0; // 10ed:2410
db dummy6_132e1; // 10ed:2411
db dummy6_132e2; // 10ed:2412
db dummy6_132e3;
db dummy6_132e4; // 10ed:2414
db dummy6_132e5;
db dummy6_132e6; // 10ed:2416
db dummy6_132e7;
db dummy6_132e8; // 10ed:2418
db dummy6_132e9;
db dummy6_132ea; // 10ed:241a
db dummy6_132eb;
db dummy6_132ec; // 10ed:241c
db dummy6_132ed;
db dummy6_132ee; // 10ed:241e
db dummy6_132ef;
db dummy6_132f0; // 10ed:2420
db dummy6_132f1;
db dummy6_132f2; // 10ed:2422
db dummy6_132f3;
db dummy6_132f4; // 10ed:2424
db dummy6_132f5; // 10ed:2425
db unk_218d6; // 10ed:2426
db dummy6_132f7; // 10ed:2427
db dummy6_132f8; // 10ed:2428
db dummy6_132f9; // 10ed:2429
db unk_218da; // 10ed:242a
db dummy6_132fb; // 10ed:242b
db dummy6_132fc; // 10ed:242c
db dummy6_132fd; // 10ed:242d
db dummy6_132fe; // 10ed:242e
db dummy6_132ff; // 10ed:242f
db dummy6_13300; // 10ed:2430
db dummy6_13301; // 10ed:2431
db dummy6_13302; // 10ed:2432
db dummy6_13303; // 10ed:2433
db dummy6_13304; // 10ed:2434
db dummy6_13305; // 10ed:2435
db dummy6_13306; // 10ed:2436
db dummy6_13307; // 10ed:2437
db dummy6_13308; // 10ed:2438
db dummy6_13309; // 10ed:2439
db dummy6_1330a; // 10ed:243a
db dummy6_1330b; // 10ed:243b
db dummy6_1330c; // 10ed:243c
db dummy6_1330d; // 10ed:243d
dw word_218ee; // 10ed:243e
db unk_218f0; // 10ed:2440
db dummy6_13311;
db dummy6_13312; // 10ed:2442
db dummy6_13313;
db dummy6_13314; // 10ed:2444
db dummy6_13315;
db dummy6_13316; // 10ed:2446
db dummy6_13317;
db unk_218f8; // 10ed:2448
db dummy6_13319;
db dummy6_1331a; // 10ed:244a
db dummy6_1331b;
db dummy6_1331c; // 10ed:244c
db dummy6_1331d;
db dummy6_1331e; // 10ed:244e
db dummy6_1331f;
db dummy6_13320;
db dummy6_13321;
dw dummy6_13322; // 10ed:2452
dw dummy6_13324; // 10ed:2454
dw dummy6_13326; // 10ed:2456
dw dummy6_13328; // 10ed:2458
dw dummy6_1332a; // 10ed:245a
dw dummy6_1332c; // 10ed:245c
dw dummy6_1332e; // 10ed:245e
db byte_21910; // 10ed:2460
db dummy6_13331; // 10ed:2461
db dummy6_13332; // 10ed:2462
db dummy6_13333;
db dummy6_13334; // 10ed:2464
dw dummy6_13335; // 10ed:2465
db dummy6_13337[32]; // 10ed:2467
db dummy6_13357[32]; // 10ed:2487
db dummy6_13377[32]; // 10ed:24a7
db dummy6_13397[32]; // 10ed:24c7
db dummy6_133b7;
db dummy6_133b8; // 10ed:24e8
db dummy6_133b9;
db dummy6_133ba; // 10ed:24ea
db dummy6_133bb; // 10ed:24eb
db dummy6_133bc; // 10ed:24ec
db dummy6_133bd; // 10ed:24ed
db dummy6_133be; // 10ed:24ee
db dummy6_133bf;
db dummy6_133c0; // 10ed:24f0
db dummy6_133c1;
db dummy6_133c2; // 10ed:24f2
db dummy6_133c3;
db dummy6_133c4; // 10ed:24f4
db dummy6_133c5;
db dummy6_133c6; // 10ed:24f6
db dummy6_133c7;
db dummy6_133c8; // 10ed:24f8
db dummy6_133c9;
db dummy6_133ca; // 10ed:24fa
db dummy6_133cb; // 10ed:24fb
db dummy6_133cc; // 10ed:24fc
db dummy6_133cd;
db dummy6_133ce; // 10ed:24fe
db dummy6_133cf;
db dummy6_133d0; // 10ed:2500
db dummy6_133d1;
db dummy6_133d2; // 10ed:2502
db dummy6_133d3; // 10ed:2503
db dummy6_133d4; // 10ed:2504
db dummy6_133d5;
db unk_219b6; // 10ed:2506
db dummy6_133d7;
db dummy6_133d8; // 10ed:2508
db dummy6_133d9;
db dummy6_133da; // 10ed:250a
db dummy6_133db;
db dummy6_133dc; // 10ed:250c
db dummy6_133dd;
db dummy6_133de; // 10ed:250e
db dummy6_133df;
db dummy6_133e0; // 10ed:2510
db dummy6_133e1;
db dummy6_133e2; // 10ed:2512
db dummy6_133e3; // 10ed:2513
dw word_219c4; // 10ed:2514
dw word_219c6; // 10ed:2516
dw off_219c8; // 10ed:2518
char athstndrder____[32]; // 10ed:251a
db dummy6_1340a; // 10ed:253a
db dummy6_1340b; // 10ed:253b
db dummy6_1340c; // 10ed:253c
db dummy6_1340d; // 10ed:253d
db dummy6_1340e; // 10ed:253e
db dummy6_1340f; // 10ed:253f
db dummy6_13410; // 10ed:2540
db dummy6_13411; // 10ed:2541
db dummy6_13412; // 10ed:2542
db dummy6_13413; // 10ed:2543
db dummy6_13414; // 10ed:2544
db dummy6_13415; // 10ed:2545
db dummy6_13416; // 10ed:2546
db dummy6_13417; // 10ed:2547
db dummy6_13418; // 10ed:2548
db dummy6_13419; // 10ed:2549
db dummy6_1341a; // 10ed:254a
db dummy6_1341b; // 10ed:254b
db dummy6_1341c; // 10ed:254c
db dummy6_1341d; // 10ed:254d
db dummy6_1341e; // 10ed:254e
db dummy6_1341f; // 10ed:254f
db dummy6_13420; // 10ed:2550
db dummy6_13421; // 10ed:2551
db dummy6_13422; // 10ed:2552
db dummy6_13423; // 10ed:2553
db dummy6_13424; // 10ed:2554
db unk_21a05; // 10ed:2555
db dummy6_13426; // 10ed:2556
db dummy6_13427; // 10ed:2557
db dummy6_13428; // 10ed:2558
db dummy6_13429; // 10ed:2559
db dummy6_1342a; // 10ed:255a
db dummy6_1342b; // 10ed:255b
db dummy6_1342c; // 10ed:255c
db dummy6_1342d; // 10ed:255d
db dummy6_1342e; // 10ed:255e
db dummy6_1342f; // 10ed:255f
db dummy6_13430; // 10ed:2560
db dummy6_13431; // 10ed:2561
db dummy6_13432; // 10ed:2562
db dummy6_13433; // 10ed:2563
db dummy6_13434; // 10ed:2564
db dummy6_13435; // 10ed:2565
db dummy6_13436; // 10ed:2566
db dummy6_13437; // 10ed:2567
db dummy6_13438; // 10ed:2568
db dummy6_13439; // 10ed:2569
db dummy6_1343a; // 10ed:256a
db dummy6_1343b; // 10ed:256b
db dummy6_1343c; // 10ed:256c
db dummy6_1343d; // 10ed:256d
db dummy6_1343e; // 10ed:256e
db dummy6_1343f; // 10ed:256f
dw word_21a20; // 10ed:2570
db unk_21a22; // 10ed:2572
db dummy6_13443; // 10ed:2573
db dummy6_13444; // 10ed:2574
db dummy6_13445; // 10ed:2575
db dummy6_13446; // 10ed:2576
db dummy6_13447; // 10ed:2577
db dummy6_13448; // 10ed:2578
db dummy6_13449; // 10ed:2579
db dummy6_1344a; // 10ed:257a
db dummy6_1344b; // 10ed:257b
db dummy6_1344c; // 10ed:257c
db dummy6_1344d; // 10ed:257d
db dummy6_1344e; // 10ed:257e
db dummy6_1344f; // 10ed:257f
dw _word_21a30_mouse_pos_scaler; // 10ed:2580
dw _word_21a32_mouse_cursor_image_addr; // 10ed:2582
dw word_21a34; // 10ed:2584
dw dummy6_13456;
db dummy6_13458[32]; // 10ed:2588
db dummy6_13478[32]; // 10ed:25a8
db unk_21a78; // 10ed:25c8
db dummy6_13499[32]; // 10ed:25c9
db dummy6_134b9[32]; // 10ed:25e9
db dummy6_134d9;
db dummy6_134da; // 10ed:260a
db dummy6_134db;
db unk_21abc; // 10ed:260c
db dummy6_134dd[32]; // 10ed:260d
db dummy6_134fd[32]; // 10ed:262d
db dummy6_1351d;
db dummy6_1351e;
db dummy6_1351f;
db unk_21b00; // 10ed:2650
db dummy6_13521[32]; // 10ed:2651
db dummy6_13541[32]; // 10ed:2671
db dummy6_13561;
db dummy6_13562;
db dummy6_13563;
db unk_21b44; // 10ed:2694
db dummy6_13565;
db dummy6_13566;
db dummy6_13567;
db dummy6_13568; // 10ed:2698
db dummy6_13569; // 10ed:2699
db dummy6_1356a; // 10ed:269a
db dummy6_1356b; // 10ed:269b
db dummy6_1356c; // 10ed:269c
db dummy6_1356d;
db dummy6_1356e; // 10ed:269e
db dummy6_1356f;
db dummy6_13570; // 10ed:26a0
db dummy6_13571; // 10ed:26a1
db dummy6_13572; // 10ed:26a2
db dummy6_13573; // 10ed:26a3
db dummy6_13574; // 10ed:26a4
db dummy6_13575; // 10ed:26a5
db unk_21b56; // 10ed:26a6
db dummy6_13577[32]; // 10ed:26a7
db dummy6_13597; // 10ed:26c7
db dummy6_13598;
db dummy6_13599;
db dummy6_1359a;
db dummy6_1359b;
db dummy6_1359c;
db dummy6_1359d;
db dummy6_1359e;
db dummy6_1359f;
db dummy6_135a0;
db dummy6_135a1;
db dummy6_135a2;
db dummy6_135a3;
db dummy6_135a4;
db dummy6_135a5;
db dummy6_135a6;
db dummy6_135a7;
db unk_21b88; // 10ed:26d8
db dummy6_135a9[32]; // 10ed:26d9
db dummy6_135c9[32]; // 10ed:26f9
db dummy6_135e9;
db dummy6_135ea;
db dummy6_135eb;
db unk_21bcc; // 10ed:271c
db dummy6_135ed[32]; // 10ed:271d
db dummy6_1360d[32]; // 10ed:273d
db dummy6_1362d;
db dummy6_1362e; // 10ed:275e
db dummy6_1362f;
db dummy6_13630;
db dummy6_13631;
db dummy6_13632;
db dummy6_13633;
db dummy6_13634; // 10ed:2764
db dummy6_13635;
db dummy6_13636;
db dummy6_13637;
db dummy6_13638;
db dummy6_13639;
db dummy6_1363a;
db dummy6_1363b;
db dummy6_1363c;
db dummy6_1363d;
db dummy6_1363e; // 10ed:276e
db dummy6_1363f; // 10ed:276f
db dummy6_13640; // 10ed:2770
db dummy6_13641;
dw word_21c22; // 10ed:2772
dw word_21c24; // 10ed:2774
dw dummy6_13646; // 10ed:2776
dw dummy6_13648; // 10ed:2778
dw dummy6_1364a; // 10ed:277a
dw dummy6_1364c; // 10ed:277c
dw dummy6_1364e; // 10ed:277e
dw dummy6_13650; // 10ed:2780
dw dummy6_13652; // 10ed:2782
dw _word_21c34_resource_id; // 10ed:2784
db unk_21c36; // 10ed:2786
db dummy6_13657; // 10ed:2787
db byte_21c38; // 10ed:2788
db dummy6_13659; // 10ed:2789
db dummy6_1365a; // 10ed:278a
db dummy6_1365b; // 10ed:278b
db dummy6_1365c; // 10ed:278c
db dummy6_1365d;
db dummy6_1365e; // 10ed:278e
db dummy6_1365f; // 10ed:278f
db dummy6_13660; // 10ed:2790
db dummy6_13661;
db dummy6_13662; // 10ed:2792
db dummy6_13663; // 10ed:2793
db dummy6_13664; // 10ed:2794
db dummy6_13665; // 10ed:2795
dw word_21c46; // 10ed:2796
dw word_21c48; // 10ed:2798
dw dummy6_1366a; // 10ed:279a
dw dummy6_1366c; // 10ed:279c
dw dummy6_1366e; // 10ed:279e
dw dummy6_13670; // 10ed:27a0
dw dummy6_13672; // 10ed:27a2
dw dummy6_13674; // 10ed:27a4
dw dummy6_13676; // 10ed:27a6
dw dummy6_13678; // 10ed:27a8
dw dummy6_1367a; // 10ed:27aa
dw dummy6_1367c; // 10ed:27ac
dw dummy6_1367e; // 10ed:27ae
dw dummy6_13680; // 10ed:27b0
dw dummy6_13682; // 10ed:27b2
dw dummy6_13684; // 10ed:27b4
dw word_21c66; // 10ed:27b6
dw dummy6_13688; // 10ed:27b8
dw dummy6_1368a; // 10ed:27ba
dw dummy6_1368c; // 10ed:27bc
dw dummy6_1368e;
dw dummy6_13690;
dw dummy6_13692; // 10ed:27c2
dw dummy6_13694; // 10ed:27c4
db dummy6_13696[32]; // 10ed:27c6
db dummy6_136b6[32]; // 10ed:27e6
db dummy6_136d6[32]; // 10ed:2806
db dummy6_136f6[32]; // 10ed:2826
db dummy6_13716[32]; // 10ed:2846
db dummy6_13736; // 10ed:2866
db dummy6_13737;
db dummy6_13738; // 10ed:2868
db dummy6_13739;
db dummy6_1373a; // 10ed:286a
db dummy6_1373b;
db dummy6_1373c; // 10ed:286c
db dummy6_1373d;
db dummy6_1373e; // 10ed:286e
db dummy6_1373f;
db dummy6_13740; // 10ed:2870
db dummy6_13741;
db dummy6_13742; // 10ed:2872
db dummy6_13743;
db dummy6_13744; // 10ed:2874
db dummy6_13745;
db dummy6_13746; // 10ed:2876
db dummy6_13747;
db dummy6_13748; // 10ed:2878
db dummy6_13749;
db dummy6_1374a; // 10ed:287a
db dummy6_1374b;
db dummy6_1374c; // 10ed:287c
db dummy6_1374d;
db dummy6_1374e; // 10ed:287e
db dummy6_1374f;
db dummy6_13750; // 10ed:2880
db dummy6_13751;
dw _word_21d32_audio_time_to_play_28224_samples_hi; // 10ed:2882
dw _word_21d34_audio_time_to_play_28224_samples_lo; // 10ed:2884
dw word_21d36; // 10ed:2886
dw word_21d38; // 10ed:2888
db dummy6_1375a; // 10ed:288a
db dummy6_1375b;
db dummy6_1375c; // 10ed:288c
db dummy6_1375d;
db unk_21d3e; // 10ed:288e
db dummy6_1375f;
db dummy6_13760; // 10ed:2890
db dummy6_13761;
db dummy6_13762; // 10ed:2892
db dummy6_13763;
db dummy6_13764; // 10ed:2894
db dummy6_13765; // 10ed:2895
db byte_21d46; // 10ed:2896
db dummy6_13767;
db dummy6_13768; // 10ed:2898
db dummy6_13769;
db dummy6_1376a; // 10ed:289a
db dummy6_1376b;
db dummy6_1376c; // 10ed:289c
db dummy6_1376d; // 10ed:289d
db byte_21d4e; // 10ed:289e
db dummy6_1376f;
db dummy6_13770; // 10ed:28a0
db dummy6_13771;
db dummy6_13772; // 10ed:28a2
db dummy6_13773;
db dummy6_13774; // 10ed:28a4
db dummy6_13775; // 10ed:28a5
db dummy6_13776; // 10ed:28a6
db dummy6_13777;
db dummy6_13778; // 10ed:28a8
db dummy6_13779;
db dummy6_1377a; // 10ed:28aa
db dummy6_1377b;
db dummy6_1377c; // 10ed:28ac
db dummy6_1377d; // 10ed:28ad
db byte_21d5e; // 10ed:28ae
db dummy6_1377f;
db dummy6_13780; // 10ed:28b0
db dummy6_13781;
db dummy6_13782; // 10ed:28b2
db dummy6_13783;
db dummy6_13784; // 10ed:28b4
db unk_21d65; // 10ed:28b5
db byte_21d66; // 10ed:28b6
db dummy6_13787;
db dummy6_13788; // 10ed:28b8
db dummy6_13789;
db dummy6_1378a; // 10ed:28ba
db dummy6_1378b;
db dummy6_1378c; // 10ed:28bc
db dummy6_1378d; // 10ed:28bd
db byte_21d6e; // 10ed:28be
db dummy6_1378f[32]; // 10ed:28bf
db dummy6_137af; // 10ed:28df
db dummy6_137b0; // 10ed:28e0
db dummy6_137b1; // 10ed:28e1
db dummy6_137b2; // 10ed:28e2
db dummy6_137b3; // 10ed:28e3
db dummy6_137b4; // 10ed:28e4
db dummy6_137b5; // 10ed:28e5
db dummy6_137b6; // 10ed:28e6
db byte_21d97; // 10ed:28e7
db byte_21d98; // 10ed:28e8
db dummy6_137b9[32]; // 10ed:28e9
db dummy6_137d9; // 10ed:2909
db dummy6_137da;
db unk_21dbb; // 10ed:290b
db dummy6_137dc;
db dummy6_137dd; // 10ed:290d
db dummy6_137de;
db dummy6_137df; // 10ed:290f
db dummy6_137e0;
db dummy6_137e1; // 10ed:2911
db dummy6_137e2; // 10ed:2912
dw _word_21dc3_interrupt_table; // 10ed:2913
dw dummy6_137e5; // 10ed:2915
dw dummy6_137e7; // 10ed:2917
dw dummy6_137e9; // 10ed:2919
dw dummy6_137eb; // 10ed:291b
dw dummy6_137ed; // 10ed:291d
dw dummy6_137ef; // 10ed:291f
dw dummy6_137f1; // 10ed:2921
dw dummy6_137f3; // 10ed:2923
dw dummy6_137f5; // 10ed:2925
dw dummy6_137f7; // 10ed:2927
dw dummy6_137f9; // 10ed:2929
dw dummy6_137fb; // 10ed:292b
dw dummy6_137fd; // 10ed:292d
dw dummy6_137ff; // 10ed:292f
dw dummy6_13801; // 10ed:2931
dw dummy6_13803; // 10ed:2933
dw dummy6_13805; // 10ed:2935
dw dummy6_13807; // 10ed:2937
dw dummy6_13809; // 10ed:2939
dw dummy6_1380b; // 10ed:293b
dw dummy6_1380d; // 10ed:293d
dw dummy6_1380f; // 10ed:293f
db byte_21df1; // 10ed:2941
db _byte_21df2_cmd_args; // 10ed:2942
db _byte_21df3_cmd_args_memory; // 10ed:2943
db _byte_21df4_cmd_args_audio; // 10ed:2944
db unk_21df5; // 10ed:2945
db dummy6_13816;
db dummy6_13817; // 10ed:2947
db dummy6_13818;
db dummy6_13819; // 10ed:2949
db dummy6_1381a;
db dummy6_1381b; // 10ed:294b
db dummy6_1381c;
db dummy6_1381d; // 10ed:294d
db dummy6_1381e; // 10ed:294e
dw res_tablat_bin; // 10ed:294f
char atablat_bin[11]; // 10ed:2951
dw res_dnchar_bin; // 10ed:295c
char adnchar_bin[11]; // 10ed:295e
dw res_dnchar2_bin; // 10ed:2969
char adnchar2_bin[12]; // 10ed:296b
dw res_dialogue_hsq; // 10ed:2977
char adialogue_hsq[13]; // 10ed:2979
dw res_ver_bin; // 10ed:2986
char aver_bin[8]; // 10ed:2988
dw res_siet_sal; // 10ed:2990
char asiet_sal[9]; // 10ed:2992
dw res_palace_sal; // 10ed:299b
char apalace_sal[11]; // 10ed:299d
dw res_vilg_sal; // 10ed:29a8
char avilg_sal[9]; // 10ed:29aa
dw res_hark_sal; // 10ed:29b3
char ahark_sal[9]; // 10ed:29b5
dw res_globdata_hsq; // 10ed:29be
char aglobdata_hsq[13]; // 10ed:29c0
dw res_phrase11_hsq; // 10ed:29cd
char aphrase11_hsq[13]; // 10ed:29cf
dw res_phrase21_hsq; // 10ed:29dc
char aphrase21_hsq[13]; // 10ed:29de
dw res_phrase31_hsq; // 10ed:29eb
char aphrase31_hsq[13]; // 10ed:29ed
dw res_phrase41_hsq; // 10ed:29fa
char aphrase41_hsq[13]; // 10ed:29fc
dw res_phrase51_hsq; // 10ed:2a09
char aphrase51_hsq[13]; // 10ed:2a0b
dw res_phrase61_hsq; // 10ed:2a18
char aphrase61_hsq[13]; // 10ed:2a1a
dw res_phrase71_hsq; // 10ed:2a27
char aphrase71_hsq[13]; // 10ed:2a29
dw res_phrase12_hsq; // 10ed:2a36
char aphrase12_hsq[13]; // 10ed:2a38
dw res_phrase22_hsq; // 10ed:2a45
char aphrase22_hsq[13]; // 10ed:2a47
dw res_phrase32_hsq; // 10ed:2a54
char aphrase32_hsq[13]; // 10ed:2a56
dw res_phrase42_hsq; // 10ed:2a63
char aphrase42_hsq[13]; // 10ed:2a65
dw res_phrase52_hsq; // 10ed:2a72
char aphrase52_hsq[13]; // 10ed:2a74
dw res_phrase62_hsq; // 10ed:2a81
char aphrase62_hsq[13]; // 10ed:2a83
dw res_phrase72_hsq; // 10ed:2a90
char aphrase72_hsq[13]; // 10ed:2a92
dw res_command1_hsq; // 10ed:2a9f
char acommand1_hsq[13]; // 10ed:2aa1
dw res_command2_hsq; // 10ed:2aae
char acommand2_hsq[13]; // 10ed:2ab0
dw res_command3_hsq; // 10ed:2abd
char acommand3_hsq[13]; // 10ed:2abf
dw res_command4_hsq; // 10ed:2acc
char acommand4_hsq[13]; // 10ed:2ace
dw res_command5_hsq; // 10ed:2adb
char acommand5_hsq[13]; // 10ed:2add
dw res_command6_hsq; // 10ed:2aea
char acommand6_hsq[13]; // 10ed:2aec
dw res_command7_hsq; // 10ed:2af9
char acommand7_hsq[13]; // 10ed:2afb
dw res_dnvga_hsq; // 10ed:2b08
char adnvga_hsq[10]; // 10ed:2b0a
dw res_dn386_hsq; // 10ed:2b14
char adn386_hsq[10]; // 10ed:2b16
dw res_dnpcs_hsq; // 10ed:2b20
char adnpcs_hsq[10]; // 10ed:2b22
dw res_dnadl_hsq; // 10ed:2b2c
char adnadl_hsq[10]; // 10ed:2b2e
dw res_dnadp_hsq; // 10ed:2b38
char adnadp_hsq[10]; // 10ed:2b3a
dw res_dnadg_hsq; // 10ed:2b44
char adnadg_hsq[10]; // 10ed:2b46
dw res_dnmid_hsq; // 10ed:2b50
char adnmid_hsq[10]; // 10ed:2b52
dw res_dnpcs2_hsq; // 10ed:2b5c
char adnpcs2_hsq[11]; // 10ed:2b5e
dw res_dnsdb_hsq; // 10ed:2b69
char adnsdb_hsq[10]; // 10ed:2b6b
dw res_dnsdp_hsq; // 10ed:2b75
char adnsbp_hsq[10]; // 10ed:2b77
dw res_condit_hsq; // 10ed:2b81
char acondit_hsq[11]; // 10ed:2b83
dw res_map_hsq; // 10ed:2b8e
char amap_hsq[8]; // 10ed:2b90
dw res_icones_hsq; // 10ed:2b98
char aicones_hsq[11]; // 10ed:2b9a
dw res_fresk_hsq; // 10ed:2ba5
char afresk_hsq[10]; // 10ed:2ba7
dw res_leto_hsq; // 10ed:2bb1
char aleto_hsq[9]; // 10ed:2bb3
dw res_jess_hsq; // 10ed:2bbc
char ajess_hsq[9]; // 10ed:2bbe
dw res_hawa_hsq; // 10ed:2bc7
char ahawa_hsq[9]; // 10ed:2bc9
dw res_idah_hsq; // 10ed:2bd2
char aidah_hsq[9]; // 10ed:2bd4
dw res_gurn_hsq; // 10ed:2bdd
char agurn_hsq[9]; // 10ed:2bdf
dw res_stil_hsq; // 10ed:2be8
char astil_hsq[9]; // 10ed:2bea
dw res_kyne_hsq; // 10ed:2bf3
char akyne_hsq[9]; // 10ed:2bf5
dw res_chan_hsq; // 10ed:2bfe
char achan_hsq[9]; // 10ed:2c00
dw res_hara_hsq; // 10ed:2c09
char ahara_hsq[9]; // 10ed:2c0b
dw res_baro_hsq; // 10ed:2c14
char abaro_hsq[9]; // 10ed:2c16
dw res_feyd_hsq; // 10ed:2c1f
char afeyd_hsq[9]; // 10ed:2c21
db res_empr_hsq; // 10ed:2c2a
db dummy6_13afb; // 10ed:2c2b
char aempr_hsq[9]; // 10ed:2c2c
db res_hark_hsq_0; // 10ed:2c35
db dummy6_13b06; // 10ed:2c36
char ahark_hsq[9]; // 10ed:2c37
db res_smug_hsq_0; // 10ed:2c40
db dummy6_13b11; // 10ed:2c41
char asmug_hsq[9]; // 10ed:2c42
db res_frm1_hsq; // 10ed:2c4b
db dummy6_13b1c; // 10ed:2c4c
char afrm1_hsq[9]; // 10ed:2c4d
db res_frm2_hsq; // 10ed:2c56
db dummy6_13b27; // 10ed:2c57
char afrm2_hsq[9]; // 10ed:2c58
db res_frm3_hsq; // 10ed:2c61
db dummy6_13b32; // 10ed:2c62
char afrm3_hsq[9]; // 10ed:2c63
db res_generic_hsq; // 10ed:2c6c
db dummy6_13b3d; // 10ed:2c6d
char ageneric_hsq[12]; // 10ed:2c6e
db res_progue_hsq; // 10ed:2c7a
db dummy6_13b4b; // 10ed:2c7b
char aprouge_hsq[11]; // 10ed:2c7c
db res_comm_hsq; // 10ed:2c87
db dummy6_13b58; // 10ed:2c88
char acomm_hsq[9]; // 10ed:2c89
db res_equi_hsq; // 10ed:2c92
db dummy6_13b63; // 10ed:2c93
char aequi_hsq[9]; // 10ed:2c94
db res_balcon_hsq; // 10ed:2c9d
db dummy6_13b6e; // 10ed:2c9e
char abalcon_hsq[11]; // 10ed:2c9f
db res_corr_hsq; // 10ed:2caa
db dummy6_13b7b; // 10ed:2cab
char acorr_hsq[9]; // 10ed:2cac
db res_por_hsq; // 10ed:2cb5
db dummy6_13b86; // 10ed:2cb6
char apor_hsq[8]; // 10ed:2cb7
db res_siet1_hsq; // 10ed:2cbf
db dummy6_13b90; // 10ed:2cc0
char asiet1_hsq[10]; // 10ed:2cc1
db res_xplain9_hsq; // 10ed:2ccb
db dummy6_13b9c; // 10ed:2ccc
char axplain9_hsq[12]; // 10ed:2ccd
db res_libre; // 10ed:2cd9
db dummy6_13baa; // 10ed:2cda
char alibre[6]; // 10ed:2cdb
db res_bunk_hsq; // 10ed:2ce1
db dummy6_13bb2; // 10ed:2ce2
char abunk_hsq[9]; // 10ed:2ce3
db res_final_hsq; // 10ed:2cec
db dummy6_13bbd; // 10ed:2ced
char afinal_hsq[10]; // 10ed:2cee
db res_serre_hsq; // 10ed:2cf8
db dummy6_13bc9; // 10ed:2cf9
char aserre_hsq[10]; // 10ed:2cfa
db res_bota_hsq; // 10ed:2d04
db dummy6_13bd5; // 10ed:2d05
char abota_hsq[9]; // 10ed:2d06
db res_palplan_hsq; // 10ed:2d0f
db dummy6_13be0;
char apalplan_hsq[12]; // 10ed:2d11
db res_sun_hsq; // 10ed:2d1d
db dummy6_13bee; // 10ed:2d1e
char asun_hsq[8]; // 10ed:2d1f
db res_vis_hsq; // 10ed:2d27
db dummy6_13bf8; // 10ed:2d28
char avis_hsq[8]; // 10ed:2d29
db res_ornypan_hsq; // 10ed:2d31
db dummy6_13c02; // 10ed:2d32
char aornypan_hsq[12]; // 10ed:2d33
db res_onmap_hsq; // 10ed:2d3f
db dummy6_13c10; // 10ed:2d40
char aonmap_hsq[10]; // 10ed:2d41
db res_pers_hsq; // 10ed:2d4b
db dummy6_13c1c; // 10ed:2d4c
char apers_hsq[9]; // 10ed:2d4d
db res_chankiss_hsq; // 10ed:2d56
db dummy6_13c27; // 10ed:2d57
char achankiss_hsq[13]; // 10ed:2d58
db res_sky_hsq; // 10ed:2d65
db dummy6_13c36; // 10ed:2d66
char asky_hsq[8]; // 10ed:2d67
db res_skydn_hsq; // 10ed:2d6f
db dummy6_13c40; // 10ed:2d70
char askydn_hsq[10]; // 10ed:2d71
db res_ornytk_hsq; // 10ed:2d7b
db dummy6_13c4c; // 10ed:2d7c
char aornytk_hsq[11]; // 10ed:2d7d
db res_attack_hsq; // 10ed:2d88
db dummy6_13c59; // 10ed:2d89
char aattack_hsq[11]; // 10ed:2d8a
db res_stars_hsq; // 10ed:2d95
db dummy6_13c66; // 10ed:2d96
char astars_hsq[10]; // 10ed:2d97
db res_intds_hsq; // 10ed:2da1
db dummy6_13c72; // 10ed:2da2
char aintds_hsq[10]; // 10ed:2da3
db res_sunrs_hsq; // 10ed:2dad
db dummy6_13c7e; // 10ed:2dae
char asunrs_hsq[10]; // 10ed:2daf
db res_paul_hsq; // 10ed:2db9
db dummy6_13c8a; // 10ed:2dba
char apaul_hsq[9]; // 10ed:2dbb
db res_back_hsq; // 10ed:2dc4
db dummy6_13c95; // 10ed:2dc5
char aback_hsq[9]; // 10ed:2dc6
db res_mois_hsq; // 10ed:2dcf
db dummy6_13ca0; // 10ed:2dd0
char amois_hsq[9]; // 10ed:2dd1
db res_book_hsq; // 10ed:2dda
db dummy6_13cab; // 10ed:2ddb
char abook_hsq[9]; // 10ed:2ddc
db res_orny_hsq; // 10ed:2de5
db dummy6_13cb6;
char aorny_hsq[9]; // 10ed:2de7
db res_ornycab_hsq; // 10ed:2df0
db dummy6_13cc1; // 10ed:2df1
char aornycab_hsq[12]; // 10ed:2df2
db res_libre_hsq; // 10ed:2dfe
db dummy6_13ccf; // 10ed:2dff
char alibre_hsq[10]; // 10ed:2e00
db res_libre_hsq_0; // 10ed:2e0a
db dummy6_13cdb; // 10ed:2e0b
char alibre_hsq_0[10]; // 10ed:2e0c
db res_libre_hsq_1; // 10ed:2e16
db dummy6_13ce7; // 10ed:2e17
char alibre_hsq_1[10]; // 10ed:2e18
db res_libre_hsq_2; // 10ed:2e22
db dummy6_13cf3; // 10ed:2e23
char alibre_0[6]; // 10ed:2e24
db res_ver_hsq; // 10ed:2e2a
db dummy6_13cfb; // 10ed:2e2b
char aver_hsq[8]; // 10ed:2e2c
db res_map2_hsq; // 10ed:2e34
db dummy6_13d05; // 10ed:2e35
char amap2_hsq[9]; // 10ed:2e36
db res_mirror_hsq; // 10ed:2e3f
db dummy6_13d10; // 10ed:2e40
char amirror_hsq[11]; // 10ed:2e41
db res_ds0_hsq; // 10ed:2e4c
db dummy6_13d1d; // 10ed:2e4d
char ads0_hsq[8]; // 10ed:2e4e
db res_ds1_hsq; // 10ed:2e56
db dummy6_13d27; // 10ed:2e57
char ads1_hsq[8]; // 10ed:2e58
db res_ds2_hsq; // 10ed:2e60
db dummy6_13d31; // 10ed:2e61
char ads2_hsq[8]; // 10ed:2e62
db res_ds3_hsq; // 10ed:2e6a
db dummy6_13d3b; // 10ed:2e6b
char ads3_hsq[8]; // 10ed:2e6c
db res_ds4_hsq; // 10ed:2e74
db dummy6_13d45; // 10ed:2e75
char ads4_hsq[8]; // 10ed:2e76
db res_libre_; // 10ed:2e7e
db dummy6_13d4f; // 10ed:2e7f
char alibre_1[6]; // 10ed:2e80
db res_dn20_hsq; // 10ed:2e86
db dummy6_13d57; // 10ed:2e87
char adn20_hsq[9]; // 10ed:2e88
db res_dn21_hsq; // 10ed:2e91
db dummy6_13d62; // 10ed:2e92
char adn21_hsq[9]; // 10ed:2e93
db res_dn22_hsq; // 10ed:2e9c
db dummy6_13d6d; // 10ed:2e9d
char adn22_hsq[9]; // 10ed:2e9e
db res_dn23_hsq; // 10ed:2ea7
db dummy6_13d78; // 10ed:2ea8
char adn23_hsq[9]; // 10ed:2ea9
db res_dn24_hsq; // 10ed:2eb2
db dummy6_13d83; // 10ed:2eb3
char adn24_hsq[9]; // 10ed:2eb4
db res_dn25_hsq; // 10ed:2ebd
db dummy6_13d8e; // 10ed:2ebe
char adn25_hsq[9]; // 10ed:2ebf
db res_dn26_hsq; // 10ed:2ec8
db dummy6_13d99; // 10ed:2ec9
char adn26_hsq[9]; // 10ed:2eca
db res_dn27_hsq; // 10ed:2ed3
db dummy6_13da4; // 10ed:2ed4
char adn27_hsq[9]; // 10ed:2ed5
db res_dn28_hsq; // 10ed:2ede
db dummy6_13daf; // 10ed:2edf
char adn28_hsq[9]; // 10ed:2ee0
db res_dn29_hsq; // 10ed:2ee9
db dummy6_13dba; // 10ed:2eea
char adn29_hsq[9]; // 10ed:2eeb
db res_dn30_hsq; // 10ed:2ef4
db dummy6_13dc5; // 10ed:2ef5
char adn30_hsq[9]; // 10ed:2ef6
db res_dn31_hsq; // 10ed:2eff
db dummy6_13dd0; // 10ed:2f00
char adn31_hsq[9]; // 10ed:2f01
db res_dn32_hsq; // 10ed:2f0a
db dummy6_13ddb; // 10ed:2f0b
char adn32_hsq[9]; // 10ed:2f0c
db res_dn33_hsq; // 10ed:2f15
db dummy6_13de6; // 10ed:2f16
char adn33_hsq[9]; // 10ed:2f17
db res_dn34_hsq; // 10ed:2f20
db dummy6_13df1; // 10ed:2f21
char adn34_hsq[9]; // 10ed:2f22
db res_dn35_hsq; // 10ed:2f2b
db dummy6_13dfc; // 10ed:2f2c
char adn35_hsq[9]; // 10ed:2f2d
db res_dn36_hsq; // 10ed:2f36
db dummy6_13e07; // 10ed:2f37
char adn36_hsq[9]; // 10ed:2f38
db res_dn37_hsq; // 10ed:2f41
db dummy6_13e12; // 10ed:2f42
char adn37_hsq[9]; // 10ed:2f43
db res_dn38_hsq; // 10ed:2f4c
db dummy6_13e1d; // 10ed:2f4d
char adn38_hsq[9]; // 10ed:2f4e
db res_mixr_hsq; // 10ed:2f57
db dummy6_13e28; // 10ed:2f58
char amixr_hsq[9]; // 10ed:2f59
db res_int02_hsq; // 10ed:2f62
db dummy6_13e33; // 10ed:2f63
char aint02_hsq[10]; // 10ed:2f64
db res_int04_hsq; // 10ed:2f6e
db dummy6_13e3f; // 10ed:2f6f
char aint04_hsq[10]; // 10ed:2f70
db res_int05_hsq; // 10ed:2f7a
db dummy6_13e4b; // 10ed:2f7b
char aint05_hsq[10]; // 10ed:2f7c
db res_int06_hsq; // 10ed:2f86
db dummy6_13e57; // 10ed:2f87
char aint06_hsq[10]; // 10ed:2f88
db res_int07_hsq; // 10ed:2f92
db dummy6_13e63; // 10ed:2f93
char aint07_hsq[10]; // 10ed:2f94
db res_int08_hsq; // 10ed:2f9e
db dummy6_13e6f; // 10ed:2f9f
char aint08_hsq[10]; // 10ed:2fa0
db res_int09_hsq; // 10ed:2faa
db dummy6_13e7b; // 10ed:2fab
char aint09_hsq[10]; // 10ed:2fac
db res_int10_hsq; // 10ed:2fb6
db dummy6_13e87; // 10ed:2fb7
char aint10_hsq[10]; // 10ed:2fb8
db res_int11_hsq; // 10ed:2fc2
db dummy6_13e93; // 10ed:2fc3
char aint11_hsq[10]; // 10ed:2fc4
db res_int13_hsq; // 10ed:2fce
db dummy6_13e9f; // 10ed:2fcf
char aint13_hsq[10]; // 10ed:2fd0
db res_int14_hsq; // 10ed:2fda
db dummy6_13eab; // 10ed:2fdb
char aint14_hsq[10]; // 10ed:2fdc
db res_int15_hsq; // 10ed:2fe6
db dummy6_13eb7; // 10ed:2fe7
char aint15_hsq[10]; // 10ed:2fe8
db res_palais_hsq; // 10ed:2ff2
db dummy6_13ec3; // 10ed:2ff3
char apalais_hsq[11]; // 10ed:2ff4
db res_mnt1_lop; // 10ed:2fff
db dummy6_13ed0; // 10ed:3000
char amnt1_lop[9]; // 10ed:3001
db res_mnt2_lop; // 10ed:300a
db dummy6_13edb; // 10ed:300b
char amnt2_lop[9]; // 10ed:300c
db res_mnt3_lop; // 10ed:3015
db dummy6_13ee6; // 10ed:3016
char amnt3_lop[9]; // 10ed:3017
db res_mnt4_lop; // 10ed:3020
db dummy6_13ef1; // 10ed:3021
char amnt4_lop[9]; // 10ed:3022
db res_siet_lop; // 10ed:302b
db dummy6_13efc; // 10ed:302c
char asiet_lop[9]; // 10ed:302d
db res_palace_lop; // 10ed:3036
db dummy6_13f07; // 10ed:3037
char apalace_lop[11]; // 10ed:3038
db res_irul1_hsq; // 10ed:3043
db dummy6_13f14; // 10ed:3044
char airul1_hsq[10]; // 10ed:3045
db res_irul2_hsq; // 10ed:304f
db dummy6_13f20; // 10ed:3050
char airul2_hsq[10]; // 10ed:3051
db res_irul3_hsq; // 10ed:305b
db dummy6_13f2c; // 10ed:305c
char airul3_hsq[10]; // 10ed:305d
db res_irul4_hsq; // 10ed:3067
db dummy6_13f38; // 10ed:3068
char airul4_hsq[10]; // 10ed:3069
db res_irul5_hsq; // 10ed:3073
db dummy6_13f44; // 10ed:3074
char airul5_hsq[10]; // 10ed:3075
db res_irul6_hsq; // 10ed:307f
db dummy6_13f50; // 10ed:3080
char airul6_hsq[10]; // 10ed:3081
db res_irul7_hsq; // 10ed:308b
db dummy6_13f5c; // 10ed:308c
char airul7_hsq[10]; // 10ed:308d
db res_irul8_hsq; // 10ed:3097
db dummy6_13f68; // 10ed:3098
char airul8_hsq[10]; // 10ed:3099
db res_irul9_hsq; // 10ed:30a3
db dummy6_13f74; // 10ed:30a4
char airul9_hsq[10]; // 10ed:30a5
db res_dp1_hsq; // 10ed:30af
db dummy6_13f80; // 10ed:30b0
char adp1_hsq[8]; // 10ed:30b1
db res_dp0_hsq; // 10ed:30b9
db dummy6_13f8a; // 10ed:30ba
char adp0_hsq[8]; // 10ed:30bb
db res_dp2_hsq; // 10ed:30c3
db dummy6_13f94; // 10ed:30c4
char adp2_hsq[8]; // 10ed:30c5
db res_dp3_hsq; // 10ed:30cd
db dummy6_13f9e; // 10ed:30ce
char adp3_hsq[8]; // 10ed:30cf
db res_df1_hsq; // 10ed:30d7
db dummy6_13fa8; // 10ed:30d8
char adf1_hsq[8]; // 10ed:30d9
db res_df2_hsq; // 10ed:30e1
db dummy6_13fb2; // 10ed:30e2
char adf2_hsq[8]; // 10ed:30e3
db res_df3_hsq; // 10ed:30eb
db dummy6_13fbc; // 10ed:30ec
char adf3_hsq[8]; // 10ed:30ed
db res_df4_hsq; // 10ed:30f5
db dummy6_13fc6; // 10ed:30f6
char adf4_hsq[8]; // 10ed:30f7
db res_vil1_hsq; // 10ed:30ff
db dummy6_13fd0; // 10ed:3100
char avil1_hsq[9]; // 10ed:3101
db res_vil2_hsq; // 10ed:310a
db dummy6_13fdb; // 10ed:310b
char avil2_hsq[9]; // 10ed:310c
db res_vil3_hsq; // 10ed:3115
db dummy6_13fe6; // 10ed:3116
char avil3_hsq[9]; // 10ed:3117
db res_vil4_hsq; // 10ed:3120
db dummy6_13ff1; // 10ed:3121
char avil4_hsq[9]; // 10ed:3122
db res_vil5_hsq; // 10ed:312b
db dummy6_13ffc; // 10ed:312c
char avil5_hsq[9]; // 10ed:312d
db res_vil6_hsq; // 10ed:3136
db dummy6_14007; // 10ed:3137
char avil6_hsq[9]; // 10ed:3138
db res_dv1_hsq; // 10ed:3141
db dummy6_14012; // 10ed:3142
char adv1_hsq[8]; // 10ed:3143
db res_dv2_hsq; // 10ed:314b
db dummy6_1401c; // 10ed:314c
char adv2_hsq[8]; // 10ed:314d
db res_dv3_hsq; // 10ed:3155
db dummy6_14026; // 10ed:3156
char adv3_hsq[8]; // 10ed:3157
db res_dv4_hsq; // 10ed:315f
db dummy6_14030; // 10ed:3160
char adv4_hsq[8]; // 10ed:3161
db res_dh0_hsq; // 10ed:3169
db dummy6_1403a; // 10ed:316a
char adh0_hsq[8]; // 10ed:316b
db res_dh1_hsq; // 10ed:3173
db dummy6_14044; // 10ed:3174
char adh1_hsq[8]; // 10ed:3175
db res_dh2_hsq; // 10ed:317d
db dummy6_1404e; // 10ed:317e
char adh2_hsq[8]; // 10ed:317f
db res_dh3_hsq; // 10ed:3187
db dummy6_14058; // 10ed:3188
char adh3_hsq[8]; // 10ed:3189
db res_vg01_hsq; // 10ed:3191
db dummy6_14062; // 10ed:3192
char avg01_hsq[9]; // 10ed:3193
db res_vg02_hsq; // 10ed:319c
db dummy6_1406d; // 10ed:319d
char avg02_hsq[9]; // 10ed:319e
db res_vg03_hsq; // 10ed:31a7
db dummy6_14078; // 10ed:31a8
char avg03_hsq[9]; // 10ed:31a9
db res_vg04_hsq; // 10ed:31b2
db dummy6_14083; // 10ed:31b3
char avg04_hsq[9]; // 10ed:31b4
db res_vg05_hsq; // 10ed:31bd
db dummy6_1408e; // 10ed:31be
char avg05_hsq[9]; // 10ed:31bf
db res_vg06_hsq; // 10ed:31c8
db dummy6_14099; // 10ed:31c9
char avg06_hsq[9]; // 10ed:31ca
db res_vg07_hsq; // 10ed:31d3
db dummy6_140a4; // 10ed:31d4
char avg07_hsq[9]; // 10ed:31d5
db res_vg08_hsq; // 10ed:31de
db dummy6_140af; // 10ed:31df
char avg08_hsq[9]; // 10ed:31e0
db res_vg09_hsq; // 10ed:31e9
db dummy6_140ba; // 10ed:31ea
char avg09_hsq[9]; // 10ed:31eb
db res_vg10_hsq; // 10ed:31f4
db dummy6_140c5; // 10ed:31f5
char avg10_hsq[9]; // 10ed:31f6
dw _off_226af_resource_names; // 10ed:31ff
dw dummy6_140d1; // 10ed:3201
dw dummy6_140d3; // 10ed:3203
dw dummy6_140d5; // 10ed:3205
dw dummy6_140d7; // 10ed:3207
dw dummy6_140d9; // 10ed:3209
dw dummy6_140db; // 10ed:320b
dw dummy6_140dd; // 10ed:320d
dw dummy6_140df; // 10ed:320f
dw dummy6_140e1; // 10ed:3211
dw dummy6_140e3; // 10ed:3213
dw dummy6_140e5; // 10ed:3215
dw dummy6_140e7; // 10ed:3217
dw dummy6_140e9; // 10ed:3219
dw dummy6_140eb; // 10ed:321b
dw dummy6_140ed; // 10ed:321d
dw dummy6_140ef; // 10ed:321f
dw dummy6_140f1; // 10ed:3221
dw dummy6_140f3; // 10ed:3223
dw dummy6_140f5; // 10ed:3225
dw dummy6_140f7; // 10ed:3227
dw dummy6_140f9; // 10ed:3229
dw dummy6_140fb; // 10ed:322b
dw dummy6_140fd; // 10ed:322d
dw dummy6_140ff; // 10ed:322f
dw dummy6_14101; // 10ed:3231
dw dummy6_14103; // 10ed:3233
dw dummy6_14105; // 10ed:3235
dw dummy6_14107; // 10ed:3237
dw dummy6_14109; // 10ed:3239
dw dummy6_1410b; // 10ed:323b
dw dummy6_1410d; // 10ed:323d
dw dummy6_1410f; // 10ed:323f
dw dummy6_14111; // 10ed:3241
dw dummy6_14113; // 10ed:3243
dw dummy6_14115; // 10ed:3245
dw dummy6_14117; // 10ed:3247
dw dummy6_14119; // 10ed:3249
dw dummy6_1411b; // 10ed:324b
dw dummy6_1411d; // 10ed:324d
dw dummy6_1411f; // 10ed:324f
dw dummy6_14121; // 10ed:3251
dw dummy6_14123; // 10ed:3253
dw dummy6_14125; // 10ed:3255
dw dummy6_14127; // 10ed:3257
dw dummy6_14129; // 10ed:3259
dw dummy6_1412b; // 10ed:325b
dw dummy6_1412d; // 10ed:325d
dw dummy6_1412f; // 10ed:325f
dw dummy6_14131; // 10ed:3261
dw dummy6_14133; // 10ed:3263
dw dummy6_14135; // 10ed:3265
dw dummy6_14137; // 10ed:3267
dw dummy6_14139; // 10ed:3269
dw dummy6_1413b; // 10ed:326b
dw dummy6_1413d; // 10ed:326d
dw dummy6_1413f; // 10ed:326f
dw dummy6_14141; // 10ed:3271
dw dummy6_14143; // 10ed:3273
dw dummy6_14145; // 10ed:3275
dw dummy6_14147; // 10ed:3277
dw dummy6_14149; // 10ed:3279
dw dummy6_1414b; // 10ed:327b
dw dummy6_1414d; // 10ed:327d
dw dummy6_1414f; // 10ed:327f
dw dummy6_14151; // 10ed:3281
dw dummy6_14153; // 10ed:3283
dw dummy6_14155; // 10ed:3285
dw dummy6_14157; // 10ed:3287
dw dummy6_14159; // 10ed:3289
dw dummy6_1415b; // 10ed:328b
dw dummy6_1415d; // 10ed:328d
dw dummy6_1415f; // 10ed:328f
dw dummy6_14161; // 10ed:3291
dw dummy6_14163; // 10ed:3293
dw dummy6_14165; // 10ed:3295
dw dummy6_14167; // 10ed:3297
dw dummy6_14169; // 10ed:3299
dw dummy6_1416b; // 10ed:329b
dw dummy6_1416d; // 10ed:329d
dw dummy6_1416f; // 10ed:329f
dw dummy6_14171; // 10ed:32a1
dw dummy6_14173; // 10ed:32a3
dw dummy6_14175; // 10ed:32a5
dw dummy6_14177; // 10ed:32a7
dw dummy6_14179; // 10ed:32a9
dw dummy6_1417b; // 10ed:32ab
dw dummy6_1417d; // 10ed:32ad
dw dummy6_1417f; // 10ed:32af
dw dummy6_14181; // 10ed:32b1
dw dummy6_14183; // 10ed:32b3
dw dummy6_14185; // 10ed:32b5
dw dummy6_14187; // 10ed:32b7
dw dummy6_14189; // 10ed:32b9
dw dummy6_1418b; // 10ed:32bb
dw dummy6_1418d; // 10ed:32bd
dw dummy6_1418f; // 10ed:32bf
dw dummy6_14191; // 10ed:32c1
dw dummy6_14193; // 10ed:32c3
dw dummy6_14195; // 10ed:32c5
dw dummy6_14197; // 10ed:32c7
dw dummy6_14199; // 10ed:32c9
dw dummy6_1419b; // 10ed:32cb
dw dummy6_1419d; // 10ed:32cd
dw dummy6_1419f; // 10ed:32cf
dw dummy6_141a1; // 10ed:32d1
dw dummy6_141a3; // 10ed:32d3
dw dummy6_141a5; // 10ed:32d5
dw dummy6_141a7; // 10ed:32d7
dw dummy6_141a9; // 10ed:32d9
dw dummy6_141ab; // 10ed:32db
dw dummy6_141ad; // 10ed:32dd
dw dummy6_141af; // 10ed:32df
dw dummy6_141b1; // 10ed:32e1
dw dummy6_141b3; // 10ed:32e3
dw dummy6_141b5; // 10ed:32e5
dw dummy6_141b7; // 10ed:32e7
dw dummy6_141b9; // 10ed:32e9
dw dummy6_141bb; // 10ed:32eb
dw dummy6_141bd; // 10ed:32ed
dw dummy6_141bf; // 10ed:32ef
dw dummy6_141c1; // 10ed:32f1
dw dummy6_141c3; // 10ed:32f3
dw dummy6_141c5; // 10ed:32f5
dw dummy6_141c7; // 10ed:32f7
dw dummy6_141c9; // 10ed:32f9
dw dummy6_141cb; // 10ed:32fb
dw dummy6_141cd; // 10ed:32fd
dw dummy6_141cf; // 10ed:32ff
dw dummy6_141d1; // 10ed:3301
dw dummy6_141d3; // 10ed:3303
dw dummy6_141d5; // 10ed:3305
dw dummy6_141d7; // 10ed:3307
dw dummy6_141d9; // 10ed:3309
dw dummy6_141db; // 10ed:330b
dw dummy6_141dd; // 10ed:330d
dw dummy6_141df; // 10ed:330f
dw dummy6_141e1; // 10ed:3311
dw dummy6_141e3; // 10ed:3313
dw dummy6_141e5; // 10ed:3315
dw dummy6_141e7; // 10ed:3317
dw dummy6_141e9; // 10ed:3319
dw dummy6_141eb; // 10ed:331b
dw dummy6_141ed; // 10ed:331d
dw dummy6_141ef; // 10ed:331f
dw dummy6_141f1; // 10ed:3321
dw dummy6_141f3; // 10ed:3323
dw dummy6_141f5; // 10ed:3325
dw dummy6_141f7; // 10ed:3327
dw dummy6_141f9; // 10ed:3329
dw dummy6_141fb; // 10ed:332b
dw dummy6_141fd; // 10ed:332d
dw dummy6_141ff; // 10ed:332f
dw dummy6_14201; // 10ed:3331
dw dummy6_14203; // 10ed:3333
dw dummy6_14205; // 10ed:3335
dw dummy6_14207; // 10ed:3337
dw dummy6_14209; // 10ed:3339
dw dummy6_1420b; // 10ed:333b
dw dummy6_1420d; // 10ed:333d
dw dummy6_1420f; // 10ed:333f
dw dummy6_14211; // 10ed:3341
dw dummy6_14213; // 10ed:3343
dw dummy6_14215; // 10ed:3345
dw dummy6_14217; // 10ed:3347
dw _off_227f9_midi_resource_files; // 10ed:3349
dw dummy6_1421b; // 10ed:334b
dw dummy6_1421d; // 10ed:334d
dw dummy6_1421f; // 10ed:334f
dw dummy6_14221; // 10ed:3351
dw dummy6_14223; // 10ed:3353
dw dummy6_14225; // 10ed:3355
dw dummy6_14227; // 10ed:3357
dw dummy6_14229; // 10ed:3359
dw dummy6_1422b; // 10ed:335b
dw dummy6_1422d; // 10ed:335d
dw dummy6_1422f; // 10ed:335f
dw dummy6_14231; // 10ed:3361
dw dummy6_14233; // 10ed:3363
dw dummy6_14235; // 10ed:3365
dw dummy6_14237; // 10ed:3367
dw dummy6_14239; // 10ed:3369
dw dummy6_1423b; // 10ed:336b
dw dummy6_1423d; // 10ed:336d
dw dummy6_1423f; // 10ed:336f
dw dummy6_14241; // 10ed:3371
dw dummy6_14243; // 10ed:3373
dw dummy6_14245; // 10ed:3375
dw dummy6_14247; // 10ed:3377
dw dummy6_14249; // 10ed:3379
dw dummy6_1424b; // 10ed:337b
dw dummy6_1424d; // 10ed:337d
dw dummy6_1424f; // 10ed:337f
dw dummy6_14251; // 10ed:3381
dw dummy6_14253; // 10ed:3383
dw dummy6_14255; // 10ed:3385
dw dummy6_14257; // 10ed:3387
dw dummy6_14259; // 10ed:3389
dw dummy6_1425b; // 10ed:338b
dw dummy6_1425d; // 10ed:338d
dw dummy6_1425f; // 10ed:338f
dw dummy6_14261; // 10ed:3391
dw dummy6_14263; // 10ed:3393
dw dummy6_14265; // 10ed:3395
dw dummy6_14267; // 10ed:3397
dw dummy6_14269; // 10ed:3399
dw dummy6_1426b; // 10ed:339b
dw dummy6_1426d; // 10ed:339d
dw dummy6_1426f; // 10ed:339f
dw dummy6_14271; // 10ed:33a1
dw resource_list_hnm; // 10ed:33a3
dw dummy6_14275; // 10ed:33a5
dw dummy6_14277; // 10ed:33a7
dw dummy6_14279; // 10ed:33a9
dw dummy6_1427b; // 10ed:33ab
dw dummy6_1427d; // 10ed:33ad
dw dummy6_1427f; // 10ed:33af
dw dummy6_14281; // 10ed:33b1
dw dummy6_14283; // 10ed:33b3
dw dummy6_14285; // 10ed:33b5
dw dummy6_14287; // 10ed:33b7
dw dummy6_14289; // 10ed:33b9
dw dummy6_1428b; // 10ed:33bb
dw dummy6_1428d; // 10ed:33bd
dw dummy6_1428f; // 10ed:33bf
dw dummy6_14291; // 10ed:33c1
dw dummy6_14293; // 10ed:33c3
dw dummy6_14295; // 10ed:33c5
dw dummy6_14297; // 10ed:33c7
dw dummy6_14299; // 10ed:33c9
dw dummy6_1429b; // 10ed:33cb
dw dummy6_1429d; // 10ed:33cd
dw dummy6_1429f; // 10ed:33cf
dw dummy6_142a1; // 10ed:33d1
dw dummy6_142a3; // 10ed:33d3
dw dummy6_142a5; // 10ed:33d5
dw dummy6_142a7; // 10ed:33d7
dw dummy6_142a9; // 10ed:33d9
dw dummy6_142ab; // 10ed:33db
dw dummy6_142ad; // 10ed:33dd
dw dummy6_142af; // 10ed:33df
dw dummy6_142b1; // 10ed:33e1
dw dummy6_142b3; // 10ed:33e3
dw dummy6_142b5; // 10ed:33e5
dw dummy6_142b7; // 10ed:33e7
dw dummy6_142b9; // 10ed:33e9
dw dummy6_142bb; // 10ed:33eb
dw res_blank_entry; // 10ed:33ed
db dummy6_142bf;
dw res_dfl2_hnm; // 10ed:33f0
char adfl2_hnm[9]; // 10ed:33f2
db dummy6_142cb;
db dummy6_142cc;
db dummy6_142cd;
db dummy6_142ce;
db dummy6_142cf;
db dummy6_142d0;
db dummy6_142d1;
db dummy6_142d2;
dw res_mnt1_hnm; // 10ed:3403
char amnt1_hnm[9]; // 10ed:3405
db dummy6_142de;
db dummy6_142df;
db dummy6_142e0;
db dummy6_142e1;
db dummy6_142e2;
db dummy6_142e3;
db dummy6_142e4;
db dummy6_142e5;
dw res_mnt2_hnm; // 10ed:3416
char amnt2_hnm[9]; // 10ed:3418
db dummy6_142f1;
db dummy6_142f2;
db dummy6_142f3;
db dummy6_142f4;
db dummy6_142f5;
db dummy6_142f6;
db dummy6_142f7;
db dummy6_142f8;
dw res_mnt3_hnm; // 10ed:3429
char amnt3_hnm[9]; // 10ed:342b
db dummy6_14304;
db dummy6_14305;
db dummy6_14306;
db dummy6_14307;
db dummy6_14308;
db dummy6_14309;
db dummy6_1430a;
db dummy6_1430b;
dw res_mnt4_hnm; // 10ed:343c
char amnt4_hnm[9]; // 10ed:343e
db dummy6_14317;
db dummy6_14318;
db dummy6_14319;
db dummy6_1431a;
db dummy6_1431b;
db dummy6_1431c;
db dummy6_1431d;
db dummy6_1431e;
dw res_siet_hnm; // 10ed:344f
char asiet_hnm[9]; // 10ed:3451
db dummy6_1432a;
db dummy6_1432b;
db dummy6_1432c;
db dummy6_1432d;
db dummy6_1432e;
db dummy6_1432f;
db dummy6_14330;
db dummy6_14331;
dw res_palace_hnm; // 10ed:3462
char apalace_hnm[11]; // 10ed:3464
dw res_fort_hnm; // 10ed:346f
char afort_hnm[9]; // 10ed:3471
dw res_mtg1_hnm; // 10ed:347a
char amtg1_hnm[9]; // 10ed:347c
dw res_mtg2_hnm; // 10ed:3485
char amtg2_hnm[9]; // 10ed:3487
dw res_mtg3_hnm; // 10ed:3490
char amtg3_hnm[9]; // 10ed:3492
dw res_plant_hnm; // 10ed:349b
char aplant_hnm[10]; // 10ed:349d
dw res_credits_hnm; // 10ed:34a7
char acredits_hnm[12]; // 10ed:34a9
dw res_virgin_hnm; // 10ed:34b5
char avirgin_hnm[11]; // 10ed:34b7
dw res_cryo_hnm; // 10ed:34c2
char acryo_hnm[9]; // 10ed:34c4
dw res_cryo2_hnm; // 10ed:34cd
char acryo2_hnm[10]; // 10ed:34cf
dw res_present_hnm; // 10ed:34d9
char apresent_hnm[12]; // 10ed:34db
dw res_irulan_hnm; // 10ed:34e7
char airulan_hnm[11]; // 10ed:34e9
dw res_seqa_hnm; // 10ed:34f4
char aseqa_hnm[9]; // 10ed:34f6
dw res_seql_hnm; // 10ed:34ff
char aseql_hnm[9]; // 10ed:3501
dw res_seqm_hnm; // 10ed:350a
char aseqm_hnm[9]; // 10ed:350c
dw res_seqp_hnm; // 10ed:3515
char aseqp_hnm[9]; // 10ed:3517
dw res_seqq_hnm; // 10ed:3520
char aseqg_hnm[9]; // 10ed:3522
dw res_seqj_hnm; // 10ed:352b
char aseqj_hnm[9]; // 10ed:352d
dw res_seqk_hnm; // 10ed:3536
char aseqk_hnm[9]; // 10ed:3538
dw res_seqi_hnm; // 10ed:3541
char aseqi_hnm[9]; // 10ed:3543
dw res_seqd_hnm; // 10ed:354c
char aseqd_hnm[9]; // 10ed:354e
dw res_seqn_hnm; // 10ed:3557
char aseqn_hnm[9]; // 10ed:3559
dw res_seqr_hnm; // 10ed:3562
char aseqr_hnm[9]; // 10ed:3564
dw res_dead_hnm; // 10ed:356d
char adead_hnm[9]; // 10ed:356f
dw res_dead2_hnm; // 10ed:3578
char adead2_hnm[10]; // 10ed:357a
dw res_dead3_hnm; // 10ed:3584
char adead3_hnm[10]; // 10ed:3586
dw res_ver_hnm; // 10ed:3590
char aver_hnm[8]; // 10ed:3592
dw res_title_hnm; // 10ed:359a
char atitle_hnm[10]; // 10ed:359c
dw _word_22a56_hnm_file_handle; // 10ed:35a6
dw _word_22a58_irulx_subtitle_frames[16]; // 10ed:35a8
dw dummy6_14498[16]; // 10ed:35a8
dw dummy6_144b8[16]; // 10ed:35a8
dw dummy6_144d8[13]; // 10ed:35a8
dw _word_22ad2_urlx_subtitle_next_frame_ptr; // 10ed:3622
char anotenoughstand[38]; // 10ed:3624
db dummy6_1451a;
char anotenoughsta_0[65]; // 10ed:364b
db dummy6_1455c;
char anotenoughsta_1[39]; // 10ed:368d
char afilenotfound[29]; // 10ed:36b4
dw res_sekence_hsq; // 10ed:36d1
char asekence_hsq[12]; // 10ed:36d3
dw res_water_hsq; // 10ed:36df
char awater_hsq[10]; // 10ed:36e1
dw res_wormsuit_hsq; // 10ed:36eb
char awormsuit_hsq[13]; // 10ed:36ed
dw res_wormintr_hsq; // 10ed:36fa
char awormintr_hsq[13]; // 10ed:36fc
dw res_warsong_hsq; // 10ed:3709
char awarsong_hsq[12]; // 10ed:370b
dw res_morning_hsq; // 10ed:3717
char amorning_hsq[12]; // 10ed:3719
dw res_sietchm_hsq; // 10ed:3725
char asietchm_hsq[12]; // 10ed:3727
dw res_bagdad_hsq; // 10ed:3733
char abagdad_hsq[11]; // 10ed:3735
dw res_arrakis_hsq; // 10ed:3740
char aarrakis_hsq[12]; // 10ed:3742
dw res_cryomus_hsq; // 10ed:374e
char acryomus_hsq[12]; // 10ed:3750
db unk_22c0c; // 10ed:375c
db dummy6_1462d; // 10ed:375d
db dummy6_1462e; // 10ed:375e
db dummy6_1462f; // 10ed:375f
db dummy6_14630; // 10ed:3760
db dummy6_14631; // 10ed:3761
db dummy6_14632; // 10ed:3762
db dummy6_14633; // 10ed:3763
db dummy6_14634; // 10ed:3764
db dummy6_14635; // 10ed:3765
db dummy6_14636; // 10ed:3766
db dummy6_14637; // 10ed:3767
db dummy6_14638; // 10ed:3768
db dummy6_14639; // 10ed:3769
db _byte_22c1a_audio_current_sfx_id; // 10ed:376a
dw res_sn1_hsq; // 10ed:376b
char asn1_hsq[8]; // 10ed:376d
dw res_sn2_hsq; // 10ed:3775
char asn2_hsq[8]; // 10ed:3777
dw res_sn3_hsq; // 10ed:377f
char asn3_hsq[8]; // 10ed:3781
dw res_sn4_hsq; // 10ed:3789
char asn4_hsq[8]; // 10ed:378b
dw res_sn5_hsq; // 10ed:3793
char asn5_voc[8]; // 10ed:3795
dw res_sn6_hsq; // 10ed:379d
char asn6_hsq[8]; // 10ed:379f
dw res_sn7_hsq; // 10ed:37a7
char asn7_voc[8]; // 10ed:37a9
dw res_sn8_hsq; // 10ed:37b1
char asn8_voc[8]; // 10ed:37b3
dw res_sn9_hsq; // 10ed:37bb
char asn9_voc[8]; // 10ed:37bd
dw res_sna_hsq; // 10ed:37c5
char asna_hsq[8]; // 10ed:37c7
dw res_freq_hsq; // 10ed:37cf
char afreq_hsq[9]; // 10ed:37d1
char apfpf001i_voc[15]; // 10ed:37da
char adune_dat[9]; // 10ed:37e9
char adnmaj1[7]; // 10ed:37f2
db dummy6_146c9;
db byte_22caa[10]; // 10ed:37fa
db byte_22cb4[10]; // 10ed:3804
dw word_22cbe; // 10ed:380e
db byte_22cc0; // 10ed:3810
dd _dword_22cc1_pcm_voc_resource_offset; // 10ed:3811
dw _word_22cc5_res_remaining; // 10ed:3815
dw _word_22cc7_pcm_callback_flag_q; // 10ed:3817
dd dword_22cc9; // 10ed:3819
dw word_22ccd; // 10ed:381d
dw _word_22ccf_pcm_callback_flag_qq; // 10ed:381f
dw _word_22cd1_res_file_handle; // 10ed:3821
db byte_22cd3; // 10ed:3823
dw word_22cd4; // 10ed:3824
db _22cd6_temp_filepath_buffer; // 10ed:3826
db dummy6_146f7[32]; // 10ed:3827
db dummy6_14717[32]; // 10ed:3847
db dummy6_14737[32]; // 10ed:3867
db dummy6_14757;
db dummy6_14758;
db dummy6_14759;
db dummy6_1475a;
db dummy6_1475b;
db dummy6_1475c;
db unk_22d3d; // 10ed:388d
db dummy6_1475e;
db dummy6_1475f;
db dummy6_14760;
db dummy6_14761;
db dummy6_14762;
db dummy6_14763;
db dummy6_14764;
db dummy6_14765;
db dummy6_14766;
db dummy6_14767;
db dummy6_14768;
db dummy6_14769;
db dummy6_1476a;
db dummy6_1476b;
db dummy6_1476c;
db dummy6_1476d;
db dummy6_1476e;
db dummy6_1476f;
db dummy6_14770;
db dummy6_14771;
db dummy6_14772;
db dummy6_14773;
db dummy6_14774;
db dummy6_14775;
dw off_22d56; // 10ed:38a6
char adune37s0_sav[13]; // 10ed:38a8
dd _ptr_22d65_gfx_vtable_func_00_set_mode; // 10ed:38b5
dd _ptr_22d65_gfx_vtable_func_01_get_info; // 10ed:38b9
dd _ptr_22d65_gfx_vtable_func_02; // 10ed:38bd
dd _ptr_22d65_gfx_vtable_func_03_draw_mouse; // 10ed:38c1
dd _ptr_22d65_gfx_vtable_func_04_restore_mouse_area_qq; // 10ed:38c5
dd _ptr_22d65_gfx_vtable_func_05_blit; // 10ed:38c9
dd _ptr_22d65_gfx_vtable_func_06; // 10ed:38cd
dd _ptr_22d65_gfx_vtable_func_07; // 10ed:38d1
dd _ptr_22d65_gfx_vtable_func_08; // 10ed:38d5
dd _ptr_22d65_gfx_vtable_func_09; // 10ed:38d9
dd _ptr_22d65_gfx_vtable_func_10; // 10ed:38dd
dd _ptr_22d65_gfx_vtable_func_11_copy_framebuf; // 10ed:38e1
dd _ptr_22d65_gfx_vtable_func_12_copy_rect; // 10ed:38e5
dd _ptr_22d65_gfx_vtable_func_13_copy_framebuf; // 10ed:38e9
dd _ptr_22d65_gfx_vtable_func_14; // 10ed:38ed
dd _ptr_22d65_gfx_vtable_func_15_copy_framebuf; // 10ed:38f1
dd _ptr_22d65_gfx_vtable_func_16; // 10ed:38f5
dd _ptr_22d65_gfx_vtable_func_17_copy_fbuf_explode_and_center; // 10ed:38f9
dd _ptr_22d65_gfx_vtable_func_18; // 10ed:38fd
dd _ptr_22d65_gfx_vtable_func_19; // 10ed:3901
dd _ptr_22d65_gfx_vtable_func_20; // 10ed:3905
dd _ptr_22d65_gfx_vtable_func_21_set_pixel; // 10ed:3909
dd _ptr_22d65_gfx_vtable_func_22; // 10ed:390d
dd _ptr_22d65_gfx_vtable_func_23; // 10ed:3911
dd _ptr_22d65_gfx_vtable_func_24; // 10ed:3915
dd _ptr_22d65_gfx_vtable_func_25; // 10ed:3919
dd _ptr_22d65_gfx_vtable_func_26; // 10ed:391d
dd _ptr_22d65_gfx_vtable_func_27; // 10ed:3921
dd _ptr_22d65_gfx_vtable_func_28; // 10ed:3925
dd _ptr_22d65_gfx_vtable_func_29; // 10ed:3929
dd _ptr_22d65_gfx_vtable_func_30; // 10ed:392d
dd _ptr_22d65_gfx_vtable_func_31; // 10ed:3931
dd _ptr_22d65_gfx_vtable_func_32; // 10ed:3935
dd _ptr_22d65_gfx_vtable_func_set_global_y_offset; // 10ed:3939
dd _ptr_22d65_gfx_vtable_func_34; // 10ed:393d
dd _ptr_22d65_gfx_vtable_func_35; // 10ed:3941
dd _ptr_22d65_gfx_vtable_func_36; // 10ed:3945
dd _ptr_22d65_gfx_vtable_func_37; // 10ed:3949
dd _ptr_22d65_gfx_vtable_func_38; // 10ed:394d
dd _ptr_22d65_gfx_vtable_func_39; // 10ed:3951
dd _ptr_22d65_gfx_vtable_func_40; // 10ed:3955
dd _ptr_22d65_gfx_vtable_func_41_copy_pal2_to_pal1; // 10ed:3959
dd _ptr_22d65_gfx_vtable_func_42; // 10ed:395d
dd _ptr_22d65_gfx_vtable_func_43; // 10ed:3961
dd _ptr_22d65_gfx_vtable_func_44; // 10ed:3965
dd _ptr_22d65_gfx_vtable_func_45; // 10ed:3969
dd midi_vtable_func_0; // 10ed:396d
dd midi_vtable_func_1; // 10ed:3971
dd midi_vtable_func_2; // 10ed:3975
dd midi_vtable_func_3; // 10ed:3979
dd midi_vtable_func_4; // 10ed:397d
dd midi_vtable_func_5; // 10ed:3981
dd midi_vtable_func_6; // 10ed:3985
dd _dword_22e39_pcm_audio_vtable_func_1; // 10ed:3989
dd _dword_22e3d_pcm_audio_vtable_func_2; // 10ed:398d
dd pcm_audio_vtable_func_3; // 10ed:3991
dd pcm_audio_vtable_func_4; // 10ed:3995
dd pcm_audio_vtable_func_5; // 10ed:3999
dd pcm_audio_vtable_func_6; // 10ed:399d
dd pcm_audio_vtable_func_7; // 10ed:39a1
dd pcm_audio_vtable_func_8; // 10ed:39a5
dw _word_22e59_xms_or_ems_mem_limit; // 10ed:39a9
dw _word_22e5b_joystick_param; // 10ed:39ab
db dummy6_1487d;
db dummy6_1487e;
dw word_22e5f; // 10ed:39af
dw word_22e61; // 10ed:39b1
dw _word_22e63_cmd_arg_midi; // 10ed:39b3
dw word_22e65; // 10ed:39b5
dw _word_22e67_allocator_next_free_ofs; // 10ed:39b7
dw _word_22e69_allocator_next_free_seg; // 10ed:39b9
db dummy6_1488b[32]; // 10ed:39bb
db dummy6_148ab[32]; // 10ed:39db
db dummy6_148cb[32]; // 10ed:39fb
db dummy6_148eb[32]; // 10ed:3a1b
db dummy6_1490b[32]; // 10ed:3a3b
db dummy6_1492b[32]; // 10ed:3a5b
db dummy6_1494b[32]; // 10ed:3a7b
db dummy6_1496b[32]; // 10ed:3a9b
db dummy6_1498b[32]; // 10ed:3abb
db dummy6_149ab[32]; // 10ed:3adb
db dummy6_149cb[32]; // 10ed:3afb
db dummy6_149eb[32]; // 10ed:3b1b
db dummy6_14a0b[32]; // 10ed:3b3b
db dummy6_14a2b[32]; // 10ed:3b5b
db dummy6_14a4b[32]; // 10ed:3b7b
db dummy6_14a6b[32]; // 10ed:3b9b
db dummy6_14a8b[32]; // 10ed:3bbb
db dummy6_14aab[32]; // 10ed:3bdb
db dummy6_14acb[32]; // 10ed:3bfb
db dummy6_14aeb[32]; // 10ed:3c1b
db dummy6_14b0b[32]; // 10ed:3c3b
db dummy6_14b2b[32]; // 10ed:3c5b
db dummy6_14b4b[32]; // 10ed:3c7b
db dummy6_14b6b[32]; // 10ed:3c9b
db dummy6_14b8b;
dw _word_2316c_error_msg; // 10ed:3cbc
db unk_2316e; // 10ed:3cbe
db dummy6_14b8f;
db unk_23170; // 10ed:3cc0
db dummy6_14b91[32]; // 10ed:3cc1
db dummy6_14bb1[32]; // 10ed:3ce1
db dummy6_14bd1[32]; // 10ed:3d01
db dummy6_14bf1[32]; // 10ed:3d21
db dummy6_14c11[32]; // 10ed:3d41
db dummy6_14c31[32]; // 10ed:3d61
db dummy6_14c51[32]; // 10ed:3d81
db dummy6_14c71[32]; // 10ed:3da1
db dummy6_14c91[32]; // 10ed:3dc1
db dummy6_14cb1[32]; // 10ed:3de1
db dummy6_14cd1[32]; // 10ed:3e01
db dummy6_14cf1[32]; // 10ed:3e21
db dummy6_14d11[32]; // 10ed:3e41
db dummy6_14d31[32]; // 10ed:3e61
db dummy6_14d51[32]; // 10ed:3e81
db dummy6_14d71[32]; // 10ed:3ea1
db dummy6_14d91[32]; // 10ed:3ec1
db dummy6_14db1[32]; // 10ed:3ee1
db dummy6_14dd1[32]; // 10ed:3f01
db dummy6_14df1[32]; // 10ed:3f21
db dummy6_14e11[32]; // 10ed:3f41
db dummy6_14e31[32]; // 10ed:3f61
db dummy6_14e51[32]; // 10ed:3f81
db dummy6_14e71[32]; // 10ed:3fa1
db dummy6_14e91[32]; // 10ed:3fc1
db dummy6_14eb1[32]; // 10ed:3fe1
db dummy6_14ed1;
db dummy6_14ed2;
db dummy6_14ed3;
db dummy6_14ed4;
db dummy6_14ed5;
db dummy6_14ed6;
db dummy6_14ed7;
db dummy6_14ed8;
db dummy6_14ed9;
db dummy6_14eda;
db dummy6_14edb;
db dummy6_14edc;
db dummy6_14edd;
db dummy6_14ede;
db dummy6_14edf;
db dummy6_14ee0;
db dummy6_14ee1;
db dummy6_14ee2;
db dummy6_14ee3;
db dummy6_14ee4;
db dummy6_14ee5;
db dummy6_14ee6;
db dummy6_14ee7;
db dummy6_14ee8;
db dummy6_14ee9;
db dummy6_14eea;
db dummy6_14eeb;
db dummy6_14eec;
db dummy6_14eed;
db dummy6_14eee;
db unk_234cf; // 10ed:401f
db dummy6_14ef0[32]; // 10ed:4020
db dummy6_14f10[32]; // 10ed:4040
db dummy6_14f30[32]; // 10ed:4060
db dummy6_14f50[32]; // 10ed:4080
db dummy6_14f70[32]; // 10ed:40a0
db dummy6_14f90;
db dummy6_14f91;
db dummy6_14f92;
db dummy6_14f93;
db dummy6_14f94;
db dummy6_14f95;
db dummy6_14f96;
db dummy6_14f97;
db dummy6_14f98;
db unk_23579; // 10ed:40c9
db dummy6_14f9a;
db dummy6_14f9b;
db dummy6_14f9c;
db dummy6_14f9d;
db dummy6_14f9e;
db dummy6_14f9f;
db dummy6_14fa0;
db dummy6_14fa1;
db dummy6_14fa2;
db dummy6_14fa3;
db dummy6_14fa4;
db dummy6_14fa5;
db dummy6_14fa6;
db dummy6_14fa7;
db dummy6_14fa8;
db dummy6_14fa9;
db dummy6_14faa;
db dummy6_14fab;
db dummy6_14fac;
db dummy6_14fad;
db dummy6_14fae;
db dummy6_14faf;
db dummy6_14fb0;
db dummy6_14fb1;
db dummy6_14fb2;
db dummy6_14fb3;
db dummy6_14fb4;
db dummy6_14fb5;
db unk_23596; // 10ed:40e6
db dummy6_14fb7[32]; // 10ed:40e7
db dummy6_14fd7[32]; // 10ed:4107
db dummy6_14ff7[32]; // 10ed:4127
db dummy6_15017[32]; // 10ed:4147
db dummy6_15037[32]; // 10ed:4167
db dummy6_15057[32]; // 10ed:4187
db dummy6_15077[32]; // 10ed:41a7
db dummy6_15097[32]; // 10ed:41c7
db dummy6_150b7[32]; // 10ed:41e7
db dummy6_150d7[32]; // 10ed:4207
db dummy6_150f7[32]; // 10ed:4227
db dummy6_15117[32]; // 10ed:4247
db dummy6_15137[32]; // 10ed:4267
db dummy6_15157[32]; // 10ed:4287
db dummy6_15177[32]; // 10ed:42a7
db dummy6_15197[32]; // 10ed:42c7
db dummy6_151b7[32]; // 10ed:42e7
db dummy6_151d7[32]; // 10ed:4307
db dummy6_151f7[32]; // 10ed:4327
db dummy6_15217[32]; // 10ed:4347
db dummy6_15237[32]; // 10ed:4367
db dummy6_15257[32]; // 10ed:4387
db dummy6_15277[32]; // 10ed:43a7
db dummy6_15297[32]; // 10ed:43c7
db dummy6_152b7[32]; // 10ed:43e7
db dummy6_152d7;
db dummy6_152d8;
db dummy6_152d9;
db dummy6_152da;
db dummy6_152db;
db dummy6_152dc;
db dummy6_152dd;
db dummy6_152de;
db dummy6_152df;
db dummy6_152e0;
db dummy6_152e1;
db dummy6_152e2;
db dummy6_152e3;
db dummy6_152e4;
db unk_238c5; // 10ed:4415
db dummy6_152e6[32]; // 10ed:4416
db dummy6_15306[32]; // 10ed:4436
db dummy6_15326[32]; // 10ed:4456
db dummy6_15346[32]; // 10ed:4476
db dummy6_15366[32]; // 10ed:4496
db dummy6_15386[32]; // 10ed:44b6
db dummy6_153a6[32]; // 10ed:44d6
db dummy6_153c6[32]; // 10ed:44f6
db dummy6_153e6[32]; // 10ed:4516
db dummy6_15406;
db dummy6_15407;
db dummy6_15408;
db dummy6_15409;
db dummy6_1540a;
db dummy6_1540b;
db dummy6_1540c;
db dummy6_1540d;
db dummy6_1540e;
db dummy6_1540f;
db unk_239f0; // 10ed:4540
db dummy6_15411[32]; // 10ed:4541
db dummy6_15431[32]; // 10ed:4561
db dummy6_15451[32]; // 10ed:4581
db dummy6_15471[32]; // 10ed:45a1
db dummy6_15491[32]; // 10ed:45c1
db dummy6_154b1[32]; // 10ed:45e1
db dummy6_154d1;
db dummy6_154d2;
db dummy6_154d3;
db dummy6_154d4;
db dummy6_154d5;
db dummy6_154d6;
db dummy6_154d7;
db unk_23ab8; // 10ed:4608
db dummy6_154d9[32]; // 10ed:4609
db dummy6_154f9[32]; // 10ed:4629
db dummy6_15519[32]; // 10ed:4649
db dummy6_15539[32]; // 10ed:4669
db dummy6_15559[32]; // 10ed:4689
db dummy6_15579;
db dummy6_1557a;
db dummy6_1557b;
db dummy6_1557c;
db dummy6_1557d;
db dummy6_1557e;
db dummy6_1557f;
db dummy6_15580;
db dummy6_15581;
db dummy6_15582;
db dummy6_15583;
db dummy6_15584;
db unk_23b65; // 10ed:46b5
db dummy6_15586;
db dummy6_15587;
db dummy6_15588;
db dummy6_15589;
db dummy6_1558a;
db dummy6_1558b;
db dummy6_1558c;
db dummy6_1558d;
db dummy6_1558e;
db dummy6_1558f;
db dummy6_15590;
db dummy6_15591;
db dummy6_15592;
db dummy6_15593;
db dummy6_15594;
db dummy6_15595;
db dummy6_15596;
db dummy6_15597;
db dummy6_15598;
db dummy6_15599;
db dummy6_1559a;
db dummy6_1559b;
db dummy6_1559c;
db dummy6_1559d;
db dummy6_1559e;
db dummy6_1559f;
db dummy6_155a0;
db dummy6_155a1;
db unk_23b82; // 10ed:46d2
db dummy6_155a3;
db unk_23b84; // 10ed:46d4
db dummy6_155a5;
db byte_23b86; // 10ed:46d6
db byte_23b87; // 10ed:46d7
db byte_23b88; // 10ed:46d8
db byte_23b89; // 10ed:46d9
db unk_23b8a; // 10ed:46da
dw word_23b8b; // 10ed:46db
db byte_23b8d; // 10ed:46dd
db dummy6_155ae;
db byte_23b8f; // 10ed:46df
db byte_23b90; // 10ed:46e0
db dummy6_155b1;
db dummy6_155b2;
dw word_23b93; // 10ed:46e3
dw word_23b95; // 10ed:46e5
dw word_23b97; // 10ed:46e7
dw word_23b99; // 10ed:46e9
db byte_23b9b; // 10ed:46eb
db unk_23b9c; // 10ed:46ec
dw word_23b9d; // 10ed:46ed
db dummy6_155bf;
db dummy6_155c0;
db dummy6_155c1;
db dummy6_155c2;
db dummy6_155c3;
db dummy6_155c4;
db dummy6_155c5;
db dummy6_155c6;
db dummy6_155c7;
db dummy6_155c8;
db dummy6_155c9;
db dummy6_155ca;
db dummy6_155cb;
db dummy6_155cc;
db dummy6_155cd;
db dummy6_155ce;
db byte_23baf; // 10ed:46ff
db dummy6_155d0;
db dummy6_155d1;
db dummy6_155d2;
db dummy6_155d3;
db dummy6_155d4;
db dummy6_155d5;
db dummy6_155d6;
db dummy6_155d7;
db dummy6_155d8;
db dummy6_155d9;
db dummy6_155da;
db dummy6_155db;
db dummy6_155dc;
db dummy6_155dd;
db dummy6_155de;
db dummy6_155df;
dw word_23bc0; // 10ed:4710
db dummy6_155e2;
db dummy6_155e3;
db dummy6_155e4;
db dummy6_155e5;
db dummy6_155e6;
db dummy6_155e7;
db dummy6_155e8;
db dummy6_155e9;
db dummy6_155ea;
db dummy6_155eb;
db dummy6_155ec;
db dummy6_155ed;
db dummy6_155ee;
db dummy6_155ef;
db dummy6_155f0;
db dummy6_155f1;
db dummy6_155f2;
db unk_23bd3; // 10ed:4723
db dummy6_155f4;
db dummy6_155f5;
db dummy6_155f6;
db unk_23bd7; // 10ed:4727
db dummy6_155f8;
dw word_23bd9; // 10ed:4729
db dummy6_155fb;
db dummy6_155fc;
dw word_23bdd; // 10ed:472d
dw word_23bdf; // 10ed:472f
db byte_23be1; // 10ed:4731
db byte_23be2; // 10ed:4732
dw word_23be3; // 10ed:4733
db byte_23be5; // 10ed:4735
db dummy6_15606;
db dummy6_15607;
db dummy6_15608;
db dummy6_15609;
db unk_23bea; // 10ed:473a
db unk_23beb; // 10ed:473b
db dummy6_1560c;
db dummy6_1560d;
db byte_23bee; // 10ed:473e
dw word_23bef; // 10ed:473f
dw word_23bf1; // 10ed:4741
dw word_23bf3; // 10ed:4743
dw word_23bf5; // 10ed:4745
dw word_23bf7; // 10ed:4747
db dummy6_15619[32]; // 10ed:4749
db dummy6_15639;
db byte_23c1a; // 10ed:476a
db byte_23c1b; // 10ed:476b
db dummy6_1563c;
db dummy6_1563d;
dw word_23c1e; // 10ed:476e
dw word_23c20; // 10ed:4770
dw word_23c22; // 10ed:4772
db byte_23c24; // 10ed:4774
db dummy6_15645;
dw word_23c26; // 10ed:4776
dw word_23c28; // 10ed:4778
dw word_23c2a; // 10ed:477a
dw word_23c2c; // 10ed:477c
db byte_23c2e; // 10ed:477e
db unk_23c2f; // 10ed:477f
dw word_23c30; // 10ed:4780
dw word_23c32; // 10ed:4782
db dummy6_15654;
db dummy6_15655;
db dummy6_15656;
db dummy6_15657;
db dummy6_15658;
db dummy6_15659;
db dummy6_1565a;
db dummy6_1565b;
db unk_23c3c; // 10ed:478c
db dummy6_1565d;
db dummy6_1565e;
db dummy6_1565f;
db dummy6_15660;
db dummy6_15661;
db dummy6_15662;
dw word_23c43; // 10ed:4793
db dummy6_15665;
db dummy6_15666;
db dummy6_15667;
db dummy6_15668;
db dummy6_15669;
db dummy6_1566a;
db dummy6_1566b;
db dummy6_1566c;
db dummy6_1566d;
dw word_23c4e; // 10ed:479e
dw word_23c50; // 10ed:47a0
db dummy6_15672;
db dummy6_15673;
db byte_23c54; // 10ed:47a4
db dummy6_15675;
db byte_23c56; // 10ed:47a6
db byte_23c57; // 10ed:47a7
db dummy6_15678;
db byte_23c59; // 10ed:47a9
dw word_23c5a; // 10ed:47aa
dd dword_23c5c; // 10ed:47ac
dd dword_23c60; // 10ed:47b0
dw word_23c64; // 10ed:47b4
db dummy6_15686;
db dummy6_15687;
db dummy6_15688;
db dummy6_15689;
db dummy6_1568a;
db dummy6_1568b;
dw word_23c6c; // 10ed:47bc
db dummy6_1568e;
db dummy6_1568f;
db dummy6_15690;
db dummy6_15691;
dw word_23c72; // 10ed:47c2
dw word_23c74; // 10ed:47c4
db unk_23c76; // 10ed:47c6
db dummy6_15697;
dw word_23c78; // 10ed:47c8
db unk_23c7a; // 10ed:47ca
db dummy6_1569b;
db unk_23c7c; // 10ed:47cc
db dummy6_1569d;
db unk_23c7e; // 10ed:47ce
db dummy6_1569f;
db unk_23c80; // 10ed:47d0
db unk_23c81; // 10ed:47d1
dw word_23c82; // 10ed:47d2
db unk_23c84; // 10ed:47d4
db dummy6_156a5;
db unk_23c86; // 10ed:47d6
db dummy6_156a7;
db unk_23c88; // 10ed:47d8
db dummy6_156a9;
db unk_23c8a; // 10ed:47da
db dummy6_156ab;
db byte_23c8c; // 10ed:47dc
db dummy6_156ad;
dw word_23c8e; // 10ed:47de
db byte_23c90; // 10ed:47e0
db unk_23c91; // 10ed:47e1
db unk_23c92; // 10ed:47e2
db dummy6_156b3;
db unk_23c94; // 10ed:47e4
db dummy6_156b5;
dw word_23c96; // 10ed:47e6
dw word_23c98; // 10ed:47e8
dw word_23c9a; // 10ed:47ea
db byte_23c9c; // 10ed:47ec
db byte_23c9d; // 10ed:47ed
dw word_23c9e; // 10ed:47ee
dw word_23ca0; // 10ed:47f0
dw word_23ca2; // 10ed:47f2
dw word_23ca4; // 10ed:47f4
dw _word_23ca6_sal_stack_buffer_24b; // 10ed:47f6
dw word_23ca8; // 10ed:47f8
dw word_23caa; // 10ed:47fa
db dummy6_156cc[32]; // 10ed:47fc
db dummy6_156ec[32]; // 10ed:481c
db dummy6_1570c;
db dummy6_1570d;
db dummy6_1570e;
db dummy6_1570f;
db dummy6_15710;
db dummy6_15711;
db dummy6_15712;
db dummy6_15713;
db dummy6_15714;
db dummy6_15715;
db dummy6_15716;
db dummy6_15717;
db dummy6_15718;
db dummy6_15719;
db dummy6_1571a;
db dummy6_1571b;
db dummy6_1571c;
db dummy6_1571d;
db dummy6_1571e;
db dummy6_1571f;
db dummy6_15720;
db dummy6_15721;
db dummy6_15722;
db dummy6_15723;
dw _word_23d04_intro_script_offset; // 10ed:4854
db unk_23d06; // 10ed:4856
db dummy6_15727;
db dummy6_15728;
db dummy6_15729;
db dummy6_1572a;
db dummy6_1572b;
db dummy6_1572c;
db dummy6_1572d;
dw word_23d0e; // 10ed:485e
db dummy6_15730;
db dummy6_15731;
db dummy6_15732;
db dummy6_15733;
db dummy6_15734;
db dummy6_15735;
db dummy6_15736;
db dummy6_15737;
db unk_23d18; // 10ed:4868
db dummy6_15739;
dw word_23d1a; // 10ed:486a
db unk_23d1c; // 10ed:486c
db dummy6_1573d;
dw word_23d1e; // 10ed:486e
dw word_23d20; // 10ed:4870
dw word_23d22; // 10ed:4872
dw word_23d24; // 10ed:4874
dw word_23d26; // 10ed:4876
dw word_23d28; // 10ed:4878
db unk_23d2a; // 10ed:487a
db dummy6_1574b;
db unk_23d2c; // 10ed:487c
db dummy6_1574d;
dw word_23d2e; // 10ed:487e
db unk_23d30; // 10ed:4880
db dummy6_15751[32]; // 10ed:4881
db dummy6_15771[32]; // 10ed:48a1
db dummy6_15791[32]; // 10ed:48c1
db dummy6_157b1[32]; // 10ed:48e1
db dummy6_157d1[32]; // 10ed:4901
db dummy6_157f1[32]; // 10ed:4921
db dummy6_15811;
db dummy6_15812;
db dummy6_15813;
db dummy6_15814;
db dummy6_15815;
db dummy6_15816;
db dummy6_15817;
dw resource_tablat; // 10ed:4948
dw word_23dfa; // 10ed:494a
dw word_23dfc; // 10ed:494c
db dummy6_1581e[32]; // 10ed:494e
db dummy6_1583e[32]; // 10ed:496e
db dummy6_1585e[32]; // 10ed:498e
db dummy6_1587e[32]; // 10ed:49ae
db dummy6_1589e[32]; // 10ed:49ce
db dummy6_158be[32]; // 10ed:49ee
db dummy6_158de[32]; // 10ed:4a0e
db dummy6_158fe[32]; // 10ed:4a2e
db dummy6_1591e[32]; // 10ed:4a4e
db dummy6_1593e[32]; // 10ed:4a6e
db dummy6_1595e[32]; // 10ed:4a8e
db dummy6_1597e[32]; // 10ed:4aae
db dummy6_1599e[32]; // 10ed:4ace
db dummy6_159be[32]; // 10ed:4aee
db dummy6_159de[32]; // 10ed:4b0e
db dummy6_159fe[32]; // 10ed:4b2e
db dummy6_15a1e[32]; // 10ed:4b4e
db dummy6_15a3e[32]; // 10ed:4b6e
db dummy6_15a5e[32]; // 10ed:4b8e
db dummy6_15a7e;
db dummy6_15a7f;
db dummy6_15a80;
db dummy6_15a81;
db dummy6_15a82;
db dummy6_15a83;
db dummy6_15a84;
db dummy6_15a85;
db dummy6_15a86;
db dummy6_15a87;
db dummy6_15a88;
db unk_24069; // 10ed:4bb9
db dummy6_15a8a[32]; // 10ed:4bba
db dummy6_15aaa[32]; // 10ed:4bda
db dummy6_15aca[32]; // 10ed:4bfa
db dummy6_15aea[32]; // 10ed:4c1a
db dummy6_15b0a[32]; // 10ed:4c3a
db dummy6_15b2a;
db dummy6_15b2b;
db dummy6_15b2c;
db dummy6_15b2d;
db dummy6_15b2e;
db dummy6_15b2f;
dw resource_globdata; // 10ed:4c60
db unk_24112; // 10ed:4c62
db dummy6_15b33;
db dummy6_15b34;
db dummy6_15b35;
db dummy6_15b36;
db dummy6_15b37;
db dummy6_15b38;
db dummy6_15b39;
db dummy6_15b3a;
db dummy6_15b3b;
db dummy6_15b3c;
db dummy6_15b3d;
db dummy6_15b3e;
db unk_2411f; // 10ed:4c6f
db dummy6_15b40[32]; // 10ed:4c70
db dummy6_15b60[32]; // 10ed:4c90
db dummy6_15b80[32]; // 10ed:4cb0
db dummy6_15ba0[32]; // 10ed:4cd0
db dummy6_15bc0[32]; // 10ed:4cf0
db dummy6_15be0[32]; // 10ed:4d10
db dummy6_15c00[32]; // 10ed:4d30
db dummy6_15c20[32]; // 10ed:4d50
db dummy6_15c40[32]; // 10ed:4d70
db dummy6_15c60[32]; // 10ed:4d90
db dummy6_15c80[32]; // 10ed:4db0
db dummy6_15ca0[32]; // 10ed:4dd0
db dummy6_15cc0[32]; // 10ed:4df0
db dummy6_15ce0;
db dummy6_15ce1;
db dummy6_15ce2;
db dummy6_15ce3;
db dummy6_15ce4;
db dummy6_15ce5;
db dummy6_15ce6;
db dummy6_15ce7;
db dummy6_15ce8;
db dummy6_15ce9;
db dummy6_15cea;
db dummy6_15ceb;
db dummy6_15cec;
db dummy6_15ced;
db dummy6_15cee;
db dummy6_15cef;
db unk_242d0; // 10ed:4e20
db dummy6_15cf1[32]; // 10ed:4e21
db dummy6_15d11[32]; // 10ed:4e41
db dummy6_15d31[32]; // 10ed:4e61
db dummy6_15d51[32]; // 10ed:4e81
db dummy6_15d71[32]; // 10ed:4ea1
db dummy6_15d91[32]; // 10ed:4ec1
db dummy6_15db1[32]; // 10ed:4ee1
db dummy6_15dd1[32]; // 10ed:4f01
db dummy6_15df1[32]; // 10ed:4f21
db dummy6_15e11[32]; // 10ed:4f41
db dummy6_15e31[32]; // 10ed:4f61
db dummy6_15e51[32]; // 10ed:4f81
db dummy6_15e71[32]; // 10ed:4fa1
db dummy6_15e91[32]; // 10ed:4fc1
db dummy6_15eb1[32]; // 10ed:4fe1
db dummy6_15ed1[32]; // 10ed:5001
db dummy6_15ef1[32]; // 10ed:5021
db dummy6_15f11[32]; // 10ed:5041
db dummy6_15f31[32]; // 10ed:5061
db dummy6_15f51[32]; // 10ed:5081
db dummy6_15f71[32]; // 10ed:50a1
db dummy6_15f91[32]; // 10ed:50c1
db dummy6_15fb1[32]; // 10ed:50e1
db dummy6_15fd1[32]; // 10ed:5101
db dummy6_15ff1[32]; // 10ed:5121
db dummy6_16011[32]; // 10ed:5141
db dummy6_16031[32]; // 10ed:5161
db dummy6_16051[32]; // 10ed:5181
db dummy6_16071[32]; // 10ed:51a1
db dummy6_16091[32]; // 10ed:51c1
db dummy6_160b1[32]; // 10ed:51e1
db dummy6_160d1[32]; // 10ed:5201
db dummy6_160f1[32]; // 10ed:5221
db dummy6_16111[32]; // 10ed:5241
db dummy6_16131[32]; // 10ed:5261
db dummy6_16151[32]; // 10ed:5281
db dummy6_16171[32]; // 10ed:52a1
db dummy6_16191[32]; // 10ed:52c1
db dummy6_161b1[32]; // 10ed:52e1
db dummy6_161d1[32]; // 10ed:5301
db dummy6_161f1[32]; // 10ed:5321
db dummy6_16211[32]; // 10ed:5341
db dummy6_16231[32]; // 10ed:5361
db dummy6_16251[32]; // 10ed:5381
db dummy6_16271[32]; // 10ed:53a1
db dummy6_16291[32]; // 10ed:53c1
db dummy6_162b1[32]; // 10ed:53e1
db dummy6_162d1[32]; // 10ed:5401
db dummy6_162f1[32]; // 10ed:5421
db dummy6_16311[32]; // 10ed:5441
db dummy6_16331[32]; // 10ed:5461
db dummy6_16351[32]; // 10ed:5481
db dummy6_16371[32]; // 10ed:54a1
db dummy6_16391[32]; // 10ed:54c1
db dummy6_163b1[32]; // 10ed:54e1
db dummy6_163d1[32]; // 10ed:5501
db dummy6_163f1[32]; // 10ed:5521
db dummy6_16411;
db dummy6_16412;
db dummy6_16413;
db dummy6_16414;
db dummy6_16415;
db dummy6_16416;
db dummy6_16417;
db dummy6_16418;
db dummy6_16419;
db dummy6_1641a;
db dummy6_1641b;
db dummy6_1641c;
db dummy6_1641d;
db dummy6_1641e;
db dummy6_1641f;
db dummy6_16420;
db dummy6_16421;
db dummy6_16422;
db dummy6_16423;
db dummy6_16424;
db unk_24a05; // 10ed:5555
db dummy6_16426[32]; // 10ed:5556
db dummy6_16446[32]; // 10ed:5576
db dummy6_16466[32]; // 10ed:5596
db dummy6_16486[32]; // 10ed:55b6
db dummy6_164a6[32]; // 10ed:55d6
db dummy6_164c6[32]; // 10ed:55f6
db dummy6_164e6[32]; // 10ed:5616
db dummy6_16506[32]; // 10ed:5636
db dummy6_16526[32]; // 10ed:5656
db dummy6_16546[32]; // 10ed:5676
db dummy6_16566[32]; // 10ed:5696
db dummy6_16586[32]; // 10ed:56b6
db dummy6_165a6[32]; // 10ed:56d6
db dummy6_165c6[32]; // 10ed:56f6
db dummy6_165e6[32]; // 10ed:5716
db dummy6_16606[32]; // 10ed:5736
db dummy6_16626[32]; // 10ed:5756
db dummy6_16646;
db dummy6_16647;
db dummy6_16648;
db unk_24c29; // 10ed:5779
db dummy6_1664a[32]; // 10ed:577a
db dummy6_1666a[32]; // 10ed:579a
db dummy6_1668a[32]; // 10ed:57ba
db dummy6_166aa[32]; // 10ed:57da
db dummy6_166ca[32]; // 10ed:57fa
db dummy6_166ea[32]; // 10ed:581a
db dummy6_1670a[32]; // 10ed:583a
db dummy6_1672a[32]; // 10ed:585a
db dummy6_1674a[32]; // 10ed:587a
db dummy6_1676a[32]; // 10ed:589a
db dummy6_1678a[32]; // 10ed:58ba
db dummy6_167aa[32]; // 10ed:58da
db dummy6_167ca[32]; // 10ed:58fa
db dummy6_167ea[32]; // 10ed:591a
db unk_24dea; // 10ed:593a
db dummy6_1680b[32]; // 10ed:593b
db dummy6_1682b;
db dummy6_1682c;
db dummy6_1682d;
db dummy6_1682e;
db dummy6_1682f;
db unk_24e10; // 10ed:5960
db dummy6_16831[32]; // 10ed:5961
db dummy6_16851[32]; // 10ed:5981
db dummy6_16871[32]; // 10ed:59a1
db dummy6_16891[32]; // 10ed:59c1
db dummy6_168b1[32]; // 10ed:59e1
db dummy6_168d1[32]; // 10ed:5a01
db dummy6_168f1[32]; // 10ed:5a21
db dummy6_16911[32]; // 10ed:5a41
db dummy6_16931[32]; // 10ed:5a61
db dummy6_16951[32]; // 10ed:5a81
db dummy6_16971[32]; // 10ed:5aa1
db dummy6_16991[32]; // 10ed:5ac1
db dummy6_169b1[32]; // 10ed:5ae1
db dummy6_169d1[32]; // 10ed:5b01
db dummy6_169f1[32]; // 10ed:5b21
db dummy6_16a11[32]; // 10ed:5b41
db dummy6_16a31[32]; // 10ed:5b61
db dummy6_16a51[32]; // 10ed:5b81
db dummy6_16a71[32]; // 10ed:5ba1
db dummy6_16a91[32]; // 10ed:5bc1
db dummy6_16ab1[32]; // 10ed:5be1
db dummy6_16ad1[32]; // 10ed:5c01
db dummy6_16af1[32]; // 10ed:5c21
db dummy6_16b11[32]; // 10ed:5c41
db dummy6_16b31[32]; // 10ed:5c61
db dummy6_16b51[32]; // 10ed:5c81
db dummy6_16b71[32]; // 10ed:5ca1
db dummy6_16b91[32]; // 10ed:5cc1
db dummy6_16bb1[32]; // 10ed:5ce1
db dummy6_16bd1[32]; // 10ed:5d01
db dummy6_16bf1[32]; // 10ed:5d21
db dummy6_16c11[32]; // 10ed:5d41
db dummy6_16c31[32]; // 10ed:5d61
db dummy6_16c51[32]; // 10ed:5d81
db dummy6_16c71[32]; // 10ed:5da1
db dummy6_16c91[32]; // 10ed:5dc1
db dummy6_16cb1[32]; // 10ed:5de1
db dummy6_16cd1[32]; // 10ed:5e01
db dummy6_16cf1[32]; // 10ed:5e21
db dummy6_16d11[32]; // 10ed:5e41
db dummy6_16d31[32]; // 10ed:5e61
db dummy6_16d51[32]; // 10ed:5e81
db dummy6_16d71[32]; // 10ed:5ea1
db dummy6_16d91[32]; // 10ed:5ec1
db dummy6_16db1[32]; // 10ed:5ee1
db dummy6_16dd1[32]; // 10ed:5f01
db dummy6_16df1[32]; // 10ed:5f21
db dummy6_16e11[32]; // 10ed:5f41
db dummy6_16e31[32]; // 10ed:5f61
db dummy6_16e51[32]; // 10ed:5f81
db dummy6_16e71[32]; // 10ed:5fa1
db dummy6_16e91[32]; // 10ed:5fc1
db dummy6_16eb1[32]; // 10ed:5fe1
db dummy6_16ed1[32]; // 10ed:6001
db dummy6_16ef1[32]; // 10ed:6021
db dummy6_16f11[32]; // 10ed:6041
db dummy6_16f31[32]; // 10ed:6061
db dummy6_16f51[32]; // 10ed:6081
db dummy6_16f71[32]; // 10ed:60a1
db dummy6_16f91[32]; // 10ed:60c1
db dummy6_16fb1[32]; // 10ed:60e1
db dummy6_16fd1[32]; // 10ed:6101
db dummy6_16ff1[32]; // 10ed:6121
db dummy6_17011[32]; // 10ed:6141
db dummy6_17031[32]; // 10ed:6161
db dummy6_17051[32]; // 10ed:6181
db dummy6_17071[32]; // 10ed:61a1
db dummy6_17091[32]; // 10ed:61c1
db dummy6_170b1[32]; // 10ed:61e1
db dummy6_170d1[32]; // 10ed:6201
db dummy6_170f1[32]; // 10ed:6221
db dummy6_17111[32]; // 10ed:6241
db dummy6_17131[32]; // 10ed:6261
db dummy6_17151[32]; // 10ed:6281
db dummy6_17171[32]; // 10ed:62a1
db dummy6_17191[32]; // 10ed:62c1
db dummy6_171b1[32]; // 10ed:62e1
db dummy6_171d1[32]; // 10ed:6301
db dummy6_171f1[32]; // 10ed:6321
db dummy6_17211[32]; // 10ed:6341
db dummy6_17231[32]; // 10ed:6361
db dummy6_17251[32]; // 10ed:6381
db dummy6_17271[32]; // 10ed:63a1
db dummy6_17291[32]; // 10ed:63c1
db dummy6_172b1[32]; // 10ed:63e1
db dummy6_172d1[32]; // 10ed:6401
db dummy6_172f1[32]; // 10ed:6421
db dummy6_17311[32]; // 10ed:6441
db dummy6_17331[32]; // 10ed:6461
db dummy6_17351[32]; // 10ed:6481
db dummy6_17371[32]; // 10ed:64a1
db dummy6_17391[32]; // 10ed:64c1
db dummy6_173b1[32]; // 10ed:64e1
db dummy6_173d1[32]; // 10ed:6501
db dummy6_173f1[32]; // 10ed:6521
db dummy6_17411[32]; // 10ed:6541
db dummy6_17431[32]; // 10ed:6561
db dummy6_17451[32]; // 10ed:6581
db dummy6_17471[32]; // 10ed:65a1
db dummy6_17491[32]; // 10ed:65c1
db dummy6_174b1[32]; // 10ed:65e1
db dummy6_174d1[32]; // 10ed:6601
db dummy6_174f1[32]; // 10ed:6621
db dummy6_17511[32]; // 10ed:6641
db dummy6_17531[32]; // 10ed:6661
db dummy6_17551[32]; // 10ed:6681
db dummy6_17571[32]; // 10ed:66a1
db dummy6_17591[32]; // 10ed:66c1
db dummy6_175b1[32]; // 10ed:66e1
db dummy6_175d1[32]; // 10ed:6701
db dummy6_175f1[32]; // 10ed:6721
db dummy6_17611[32]; // 10ed:6741
db dummy6_17631[32]; // 10ed:6761
db dummy6_17651[32]; // 10ed:6781
db dummy6_17671[32]; // 10ed:67a1
db dummy6_17691[32]; // 10ed:67c1
db dummy6_176b1[32]; // 10ed:67e1
db dummy6_176d1[32]; // 10ed:6801
db dummy6_176f1[32]; // 10ed:6821
db dummy6_17711[32]; // 10ed:6841
db dummy6_17731[32]; // 10ed:6861
db dummy6_17751[32]; // 10ed:6881
db dummy6_17771[32]; // 10ed:68a1
db dummy6_17791[32]; // 10ed:68c1
db dummy6_177b1[32]; // 10ed:68e1
db dummy6_177d1[32]; // 10ed:6901
db dummy6_177f1[32]; // 10ed:6921
db dummy6_17811[32]; // 10ed:6941
db dummy6_17831[32]; // 10ed:6961
db dummy6_17851[32]; // 10ed:6981
db dummy6_17871[32]; // 10ed:69a1
db dummy6_17891[32]; // 10ed:69c1
db dummy6_178b1[32]; // 10ed:69e1
db dummy6_178d1[32]; // 10ed:6a01
db dummy6_178f1[32]; // 10ed:6a21
db dummy6_17911[32]; // 10ed:6a41
db dummy6_17931[32]; // 10ed:6a61
db dummy6_17951[32]; // 10ed:6a81
db dummy6_17971[32]; // 10ed:6aa1
db dummy6_17991[32]; // 10ed:6ac1
db dummy6_179b1[32]; // 10ed:6ae1
db dummy6_179d1[32]; // 10ed:6b01
db dummy6_179f1[32]; // 10ed:6b21
db dummy6_17a11[32]; // 10ed:6b41
db dummy6_17a31[32]; // 10ed:6b61
db dummy6_17a51[32]; // 10ed:6b81
db dummy6_17a71[32]; // 10ed:6ba1
db dummy6_17a91[32]; // 10ed:6bc1
db dummy6_17ab1[32]; // 10ed:6be1
db dummy6_17ad1[32]; // 10ed:6c01
db dummy6_17af1[32]; // 10ed:6c21
db dummy6_17b11[32]; // 10ed:6c41
db dummy6_17b31[32]; // 10ed:6c61
db dummy6_17b51[32]; // 10ed:6c81
db dummy6_17b71[32]; // 10ed:6ca1
db dummy6_17b91[32]; // 10ed:6cc1
db dummy6_17bb1[32]; // 10ed:6ce1
db dummy6_17bd1[32]; // 10ed:6d01
db dummy6_17bf1[32]; // 10ed:6d21
db dummy6_17c11[32]; // 10ed:6d41
db dummy6_17c31;
db dummy6_17c32;
db dummy6_17c33;
db dummy6_17c34;
db dummy6_17c35;
db dummy6_17c36;
db dummy6_17c37;
db dummy6_17c38;
db dummy6_17c39;
db dummy6_17c3a;
db dummy6_17c3b;
db dummy6_17c3c;
db unk_2621d; // 10ed:6d6d
db dummy6_17c3e[32]; // 10ed:6d6e
db dummy6_17c5e[32]; // 10ed:6d8e
db dummy6_17c7e[32]; // 10ed:6dae
db dummy6_17c9e[32]; // 10ed:6dce
db dummy6_17cbe[32]; // 10ed:6dee
db dummy6_17cde[32]; // 10ed:6e0e
db dummy6_17cfe[32]; // 10ed:6e2e
db dummy6_17d1e[32]; // 10ed:6e4e
db dummy6_17d3e[32]; // 10ed:6e6e
db dummy6_17d5e[32]; // 10ed:6e8e
db dummy6_17d7e[32]; // 10ed:6eae
db dummy6_17d9e[32]; // 10ed:6ece
db dummy6_17dbe[32]; // 10ed:6eee
db dummy6_17dde[32]; // 10ed:6f0e
db dummy6_17dfe[32]; // 10ed:6f2e
db dummy6_17e1e[32]; // 10ed:6f4e
db dummy6_17e3e[32]; // 10ed:6f6e
db dummy6_17e5e[32]; // 10ed:6f8e
db dummy6_17e7e[32]; // 10ed:6fae
db dummy6_17e9e[32]; // 10ed:6fce
db dummy6_17ebe[32]; // 10ed:6fee
db dummy6_17ede[32]; // 10ed:700e
db dummy6_17efe[32]; // 10ed:702e
db dummy6_17f1e[32]; // 10ed:704e
db dummy6_17f3e[32]; // 10ed:706e
db dummy6_17f5e[32]; // 10ed:708e
db dummy6_17f7e[32]; // 10ed:70ae
db dummy6_17f9e[32]; // 10ed:70ce
db dummy6_17fbe[32]; // 10ed:70ee
db dummy6_17fde[32]; // 10ed:710e
db dummy6_17ffe[32]; // 10ed:712e
db dummy6_1801e[32]; // 10ed:714e
db dummy6_1803e[32]; // 10ed:716e
db dummy6_1805e[32]; // 10ed:718e
db dummy6_1807e[32]; // 10ed:71ae
db dummy6_1809e[32]; // 10ed:71ce
db dummy6_180be[32]; // 10ed:71ee
db dummy6_180de[32]; // 10ed:720e
db dummy6_180fe[32]; // 10ed:722e
db dummy6_1811e[32]; // 10ed:724e
db dummy6_1813e[32]; // 10ed:726e
db dummy6_1815e[32]; // 10ed:728e
db dummy6_1817e[32]; // 10ed:72ae
db dummy6_1819e[32]; // 10ed:72ce
db dummy6_181be[32]; // 10ed:72ee
db dummy6_181de[32]; // 10ed:730e
db dummy6_181fe[32]; // 10ed:732e
db dummy6_1821e[32]; // 10ed:734e
db dummy6_1823e[32]; // 10ed:736e
db dummy6_1825e[32]; // 10ed:738e
db dummy6_1827e[32]; // 10ed:73ae
db dummy6_1829e[32]; // 10ed:73ce
db dummy6_182be[32]; // 10ed:73ee
db dummy6_182de[32]; // 10ed:740e
db dummy6_182fe[32]; // 10ed:742e
db dummy6_1831e[32]; // 10ed:744e
db dummy6_1833e[32]; // 10ed:746e
db dummy6_1835e[32]; // 10ed:748e
db dummy6_1837e[32]; // 10ed:74ae
db dummy6_1839e[32]; // 10ed:74ce
db dummy6_183be[32]; // 10ed:74ee
db dummy6_183de[32]; // 10ed:750e
db dummy6_183fe[32]; // 10ed:752e
db dummy6_1841e[32]; // 10ed:754e
db dummy6_1843e[32]; // 10ed:756e
db dummy6_1845e[32]; // 10ed:758e
db dummy6_1847e;
db unk_26a5f; // 10ed:75af
db dummy6_18480[32]; // 10ed:75b0
db dummy6_184a0;
db dummy6_184a1;
db dummy6_184a2;
db dummy6_184a3;
db dummy6_184a4;
db dummy6_184a5;
db dummy6_184a6;
db dummy6_184a7;
db dummy6_184a8;
db dummy6_184a9;
db dummy6_184aa;
db dummy6_184ab;
db dummy6_184ac;
db dummy6_184ad;
db dummy6_184ae;
db dummy6_184af;
db dummy6_184b0;
db dummy6_184b1;
db dummy6_184b2;
db dummy6_184b3;
db dummy6_184b4;
db dummy6_184b5;
db dummy6_184b6;
db dummy6_184b7;
db dummy6_184b8;
db dummy6_184b9;
db unk_26a9a; // 10ed:75ea
db dummy6_184bb[32]; // 10ed:75eb
db dummy6_184db[32]; // 10ed:760b
db dummy6_184fb[32]; // 10ed:762b
db dummy6_1851b[32]; // 10ed:764b
db dummy6_1853b[32]; // 10ed:766b
db dummy6_1855b[32]; // 10ed:768b
db dummy6_1857b[32]; // 10ed:76ab
db dummy6_1859b[32]; // 10ed:76cb
db dummy6_185bb[32]; // 10ed:76eb
db dummy6_185db[32]; // 10ed:770b
db dummy6_185fb[32]; // 10ed:772b
db dummy6_1861b[32]; // 10ed:774b
db dummy6_1863b[32]; // 10ed:776b
db dummy6_1865b[32]; // 10ed:778b
db dummy6_1867b[32]; // 10ed:77ab
db dummy6_1869b[32]; // 10ed:77cb
db dummy6_186bb[32]; // 10ed:77eb
db dummy6_186db[32]; // 10ed:780b
db dummy6_186fb[32]; // 10ed:782b
db dummy6_1871b[32]; // 10ed:784b
db dummy6_1873b[32]; // 10ed:786b
db dummy6_1875b[32]; // 10ed:788b
db dummy6_1877b[32]; // 10ed:78ab
db dummy6_1879b[32]; // 10ed:78cb
db dummy6_187bb[32]; // 10ed:78eb
db dummy6_187db[32]; // 10ed:790b
db dummy6_187fb[32]; // 10ed:792b
db dummy6_1881b[32]; // 10ed:794b
db dummy6_1883b[32]; // 10ed:796b
db dummy6_1885b[32]; // 10ed:798b
db dummy6_1887b[32]; // 10ed:79ab
db dummy6_1889b[32]; // 10ed:79cb
db dummy6_188bb[32]; // 10ed:79eb
db dummy6_188db[32]; // 10ed:7a0b
db dummy6_188fb[32]; // 10ed:7a2b
db dummy6_1891b[32]; // 10ed:7a4b
db dummy6_1893b[32]; // 10ed:7a6b
db dummy6_1895b[32]; // 10ed:7a8b
db dummy6_1897b[32]; // 10ed:7aab
db dummy6_1899b[32]; // 10ed:7acb
db dummy6_189bb[32]; // 10ed:7aeb
db dummy6_189db[32]; // 10ed:7b0b
db dummy6_189fb[32]; // 10ed:7b2b
db dummy6_18a1b[32]; // 10ed:7b4b
db dummy6_18a3b[32]; // 10ed:7b6b
db dummy6_18a5b[32]; // 10ed:7b8b
db dummy6_18a7b[32]; // 10ed:7bab
db dummy6_18a9b[32]; // 10ed:7bcb
db dummy6_18abb[32]; // 10ed:7beb
db dummy6_18adb[32]; // 10ed:7c0b
db dummy6_18afb[32]; // 10ed:7c2b
db dummy6_18b1b[32]; // 10ed:7c4b
db dummy6_18b3b[32]; // 10ed:7c6b
db dummy6_18b5b[32]; // 10ed:7c8b
db dummy6_18b7b[32]; // 10ed:7cab
db dummy6_18b9b[32]; // 10ed:7ccb
db dummy6_18bbb[32]; // 10ed:7ceb
db dummy6_18bdb[32]; // 10ed:7d0b
db dummy6_18bfb[32]; // 10ed:7d2b
db dummy6_18c1b[32]; // 10ed:7d4b
db dummy6_18c3b[32]; // 10ed:7d6b
db dummy6_18c5b[32]; // 10ed:7d8b
db dummy6_18c7b[32]; // 10ed:7dab
db dummy6_18c9b[32]; // 10ed:7dcb
db dummy6_18cbb[32]; // 10ed:7deb
db dummy6_18cdb[32]; // 10ed:7e0b
db dummy6_18cfb[32]; // 10ed:7e2b
db dummy6_18d1b[32]; // 10ed:7e4b
db dummy6_18d3b[32]; // 10ed:7e6b
db dummy6_18d5b[32]; // 10ed:7e8b
db dummy6_18d7b[32]; // 10ed:7eab
db dummy6_18d9b[32]; // 10ed:7ecb
db dummy6_18dbb[32]; // 10ed:7eeb
db dummy6_18ddb[32]; // 10ed:7f0b
db dummy6_18dfb[32]; // 10ed:7f2b
db dummy6_18e1b[32]; // 10ed:7f4b
db dummy6_18e3b[32]; // 10ed:7f6b
db dummy6_18e5b[32]; // 10ed:7f8b
db dummy6_18e7b[32]; // 10ed:7fab
db dummy6_18e9b[32]; // 10ed:7fcb
db dummy6_18ebb[32]; // 10ed:7feb
db dummy6_18edb[32]; // 10ed:800b
db dummy6_18efb[32]; // 10ed:802b
db dummy6_18f1b[32]; // 10ed:804b
db dummy6_18f3b[32]; // 10ed:806b
db dummy6_18f5b[32]; // 10ed:808b
db dummy6_18f7b[32]; // 10ed:80ab
db dummy6_18f9b[32]; // 10ed:80cb
db dummy6_18fbb;
db dummy6_18fbc;
db dummy6_18fbd;
db dummy6_18fbe;
db dummy6_18fbf;
db dummy6_18fc0;
db dummy6_18fc1;
db dummy6_18fc2;
db dummy6_18fc3;
db dummy6_18fc4;
db dummy6_18fc5;
db dummy6_18fc6;
db dummy6_18fc7;
db dummy6_18fc8;
db dummy6_18fc9;
db dummy6_18fca;
db dummy6_18fcb;
db dummy6_18fcc;
db dummy6_18fcd;
db dummy6_18fce;
db dummy6_18fcf;
db dummy6_18fd0;
db unk_275b1; // 10ed:8101
db dummy6_18fd2[32]; // 10ed:8102
db dummy6_18ff2[32]; // 10ed:8122
db dummy6_19012[32]; // 10ed:8142
db dummy6_19032[32]; // 10ed:8162
db dummy6_19052[32]; // 10ed:8182
db dummy6_19072[32]; // 10ed:81a2
db dummy6_19092[32]; // 10ed:81c2
db dummy6_190b2[32]; // 10ed:81e2
db dummy6_190d2[32]; // 10ed:8202
db dummy6_190f2[32]; // 10ed:8222
db dummy6_19112[32]; // 10ed:8242
db dummy6_19132[32]; // 10ed:8262
db dummy6_19152[32]; // 10ed:8282
db dummy6_19172[32]; // 10ed:82a2
db dummy6_19192[32]; // 10ed:82c2
db dummy6_191b2[32]; // 10ed:82e2
db dummy6_191d2[32]; // 10ed:8302
db dummy6_191f2[32]; // 10ed:8322
db dummy6_19212[32]; // 10ed:8342
db dummy6_19232[32]; // 10ed:8362
db dummy6_19252[32]; // 10ed:8382
db dummy6_19272[32]; // 10ed:83a2
db dummy6_19292[32]; // 10ed:83c2
db dummy6_192b2[32]; // 10ed:83e2
db dummy6_192d2[32]; // 10ed:8402
db dummy6_192f2[32]; // 10ed:8422
db dummy6_19312[32]; // 10ed:8442
db dummy6_19332[32]; // 10ed:8462
db dummy6_19352[32]; // 10ed:8482
db dummy6_19372[32]; // 10ed:84a2
db dummy6_19392[32]; // 10ed:84c2
db dummy6_193b2[32]; // 10ed:84e2
db dummy6_193d2[32]; // 10ed:8502
db dummy6_193f2[32]; // 10ed:8522
db dummy6_19412[32]; // 10ed:8542
db dummy6_19432[32]; // 10ed:8562
db dummy6_19452[32]; // 10ed:8582
db dummy6_19472[32]; // 10ed:85a2
db dummy6_19492[32]; // 10ed:85c2
db dummy6_194b2[32]; // 10ed:85e2
db dummy6_194d2[32]; // 10ed:8602
db dummy6_194f2[32]; // 10ed:8622
db dummy6_19512[32]; // 10ed:8642
db dummy6_19532[32]; // 10ed:8662
db dummy6_19552[32]; // 10ed:8682
db dummy6_19572[32]; // 10ed:86a2
db dummy6_19592[32]; // 10ed:86c2
db dummy6_195b2[32]; // 10ed:86e2
db dummy6_195d2[32]; // 10ed:8702
db dummy6_195f2[32]; // 10ed:8722
db dummy6_19612[32]; // 10ed:8742
db dummy6_19632[32]; // 10ed:8762
db dummy6_19652[32]; // 10ed:8782
db dummy6_19672[32]; // 10ed:87a2
db dummy6_19692[32]; // 10ed:87c2
db dummy6_196b2[32]; // 10ed:87e2
db dummy6_196d2[32]; // 10ed:8802
db dummy6_196f2[32]; // 10ed:8822
db dummy6_19712[32]; // 10ed:8842
db dummy6_19732[32]; // 10ed:8862
db dummy6_19752[32]; // 10ed:8882
db dummy6_19772[32]; // 10ed:88a2
db dummy6_19792[32]; // 10ed:88c2
db dummy6_197b2[32]; // 10ed:88e2
db dummy6_197d2[32]; // 10ed:8902
db dummy6_197f2[32]; // 10ed:8922
db dummy6_19812[32]; // 10ed:8942
db dummy6_19832[32]; // 10ed:8962
db dummy6_19852[32]; // 10ed:8982
db dummy6_19872[32]; // 10ed:89a2
db dummy6_19892[32]; // 10ed:89c2
db dummy6_198b2[32]; // 10ed:89e2
db dummy6_198d2[32]; // 10ed:8a02
db dummy6_198f2[32]; // 10ed:8a22
db dummy6_19912[32]; // 10ed:8a42
db dummy6_19932[32]; // 10ed:8a62
db dummy6_19952[32]; // 10ed:8a82
db dummy6_19972[32]; // 10ed:8aa2
db dummy6_19992[32]; // 10ed:8ac2
db dummy6_199b2[32]; // 10ed:8ae2
db dummy6_199d2[32]; // 10ed:8b02
db dummy6_199f2[32]; // 10ed:8b22
db dummy6_19a12[32]; // 10ed:8b42
db dummy6_19a32[32]; // 10ed:8b62
db dummy6_19a52[32]; // 10ed:8b82
db dummy6_19a72;
db dummy6_19a73;
db dummy6_19a74;
db dummy6_19a75;
db dummy6_19a76;
db dummy6_19a77;
db dummy6_19a78;
db dummy6_19a79;
db dummy6_19a7a;
db dummy6_19a7b;
db dummy6_19a7c;
db dummy6_19a7d;
db dummy6_19a7e;
db dummy6_19a7f;
db dummy6_19a80;
db dummy6_19a81;
db dummy6_19a82;
db dummy6_19a83;
db dummy6_19a84;
db dummy6_19a85;
db dummy6_19a86;
db dummy6_19a87;
db dummy6_19a88;
db dummy6_19a89;
db dummy6_19a8a;
db unk_2806b; // 10ed:8bbb
db dummy6_19a8c[32]; // 10ed:8bbc
db dummy6_19aac[32]; // 10ed:8bdc
db dummy6_19acc[32]; // 10ed:8bfc
db dummy6_19aec[32]; // 10ed:8c1c
db dummy6_19b0c[32]; // 10ed:8c3c
db dummy6_19b2c[32]; // 10ed:8c5c
db dummy6_19b4c[32]; // 10ed:8c7c
db dummy6_19b6c[32]; // 10ed:8c9c
db dummy6_19b8c[32]; // 10ed:8cbc
db dummy6_19bac[32]; // 10ed:8cdc
db dummy6_19bcc[32]; // 10ed:8cfc
db dummy6_19bec[32]; // 10ed:8d1c
db dummy6_19c0c[32]; // 10ed:8d3c
db dummy6_19c2c[32]; // 10ed:8d5c
db dummy6_19c4c[32]; // 10ed:8d7c
db dummy6_19c6c[32]; // 10ed:8d9c
db dummy6_19c8c[32]; // 10ed:8dbc
db dummy6_19cac[32]; // 10ed:8ddc
db dummy6_19ccc[32]; // 10ed:8dfc
db dummy6_19cec[32]; // 10ed:8e1c
db dummy6_19d0c[32]; // 10ed:8e3c
db dummy6_19d2c[32]; // 10ed:8e5c
db dummy6_19d4c[32]; // 10ed:8e7c
db dummy6_19d6c[32]; // 10ed:8e9c
db dummy6_19d8c[32]; // 10ed:8ebc
db dummy6_19dac[32]; // 10ed:8edc
db dummy6_19dcc[32]; // 10ed:8efc
db dummy6_19dec[32]; // 10ed:8f1c
db dummy6_19e0c[32]; // 10ed:8f3c
db dummy6_19e2c[32]; // 10ed:8f5c
db dummy6_19e4c[32]; // 10ed:8f7c
db dummy6_19e6c[32]; // 10ed:8f9c
db dummy6_19e8c[32]; // 10ed:8fbc
db dummy6_19eac[32]; // 10ed:8fdc
db dummy6_19ecc[32]; // 10ed:8ffc
db dummy6_19eec[32]; // 10ed:901c
db dummy6_19f0c[32]; // 10ed:903c
db dummy6_19f2c[32]; // 10ed:905c
db dummy6_19f4c[32]; // 10ed:907c
db dummy6_19f6c[32]; // 10ed:909c
db dummy6_19f8c[32]; // 10ed:90bc
db dummy6_19fac[32]; // 10ed:90dc
db dummy6_19fcc[32]; // 10ed:90fc
db dummy6_19fec[32]; // 10ed:911c
db dummy6_1a00c[32]; // 10ed:913c
db dummy6_1a02c[32]; // 10ed:915c
db dummy6_1a04c[32]; // 10ed:917c
db dummy6_1a06c[32]; // 10ed:919c
db dummy6_1a08c[32]; // 10ed:91bc
db dummy6_1a0ac[32]; // 10ed:91dc
db dummy6_1a0cc[32]; // 10ed:91fc
db dummy6_1a0ec[32]; // 10ed:921c
db dummy6_1a10c[32]; // 10ed:923c
db dummy6_1a12c[32]; // 10ed:925c
db dummy6_1a14c[32]; // 10ed:927c
db dummy6_1a16c[32]; // 10ed:929c
db dummy6_1a18c[32]; // 10ed:92bc
db dummy6_1a1ac[32]; // 10ed:92dc
db dummy6_1a1cc[32]; // 10ed:92fc
db dummy6_1a1ec[32]; // 10ed:931c
db dummy6_1a20c[32]; // 10ed:933c
db dummy6_1a22c[32]; // 10ed:935c
db dummy6_1a24c[32]; // 10ed:937c
db dummy6_1a26c[32]; // 10ed:939c
db dummy6_1a28c[32]; // 10ed:93bc
db dummy6_1a2ac[32]; // 10ed:93dc
db dummy6_1a2cc[32]; // 10ed:93fc
db dummy6_1a2ec[32]; // 10ed:941c
db dummy6_1a30c[32]; // 10ed:943c
db dummy6_1a32c[32]; // 10ed:945c
db dummy6_1a34c[32]; // 10ed:947c
db dummy6_1a36c[32]; // 10ed:949c
db dummy6_1a38c[32]; // 10ed:94bc
db dummy6_1a3ac[32]; // 10ed:94dc
db dummy6_1a3cc[32]; // 10ed:94fc
db dummy6_1a3ec[32]; // 10ed:951c
db dummy6_1a40c[32]; // 10ed:953c
db dummy6_1a42c[32]; // 10ed:955c
db dummy6_1a44c[32]; // 10ed:957c
db dummy6_1a46c[32]; // 10ed:959c
db dummy6_1a48c[32]; // 10ed:95bc
db dummy6_1a4ac[32]; // 10ed:95dc
db dummy6_1a4cc[32]; // 10ed:95fc
db dummy6_1a4ec[32]; // 10ed:961c
db dummy6_1a50c[32]; // 10ed:963c
db dummy6_1a52c[32]; // 10ed:965c
db dummy6_1a54c[32]; // 10ed:967c
db dummy6_1a56c[32]; // 10ed:969c
db dummy6_1a58c[32]; // 10ed:96bc
db dummy6_1a5ac[32]; // 10ed:96dc
db dummy6_1a5cc[32]; // 10ed:96fc
db dummy6_1a5ec[32]; // 10ed:971c
db dummy6_1a60c[32]; // 10ed:973c
db dummy6_1a62c[32]; // 10ed:975c
db dummy6_1a64c[32]; // 10ed:977c
db dummy6_1a66c[32]; // 10ed:979c
db dummy6_1a68c[32]; // 10ed:97bc
db dummy6_1a6ac[32]; // 10ed:97dc
db dummy6_1a6cc[32]; // 10ed:97fc
db dummy6_1a6ec[32]; // 10ed:981c
db dummy6_1a70c[32]; // 10ed:983c
db dummy6_1a72c[32]; // 10ed:985c
db dummy6_1a74c[32]; // 10ed:987c
db dummy6_1a76c[32]; // 10ed:989c
db dummy6_1a78c[32]; // 10ed:98bc
db dummy6_1a7ac[32]; // 10ed:98dc
db dummy6_1a7cc[32]; // 10ed:98fc
db dummy6_1a7ec[32]; // 10ed:991c
db dummy6_1a80c[32]; // 10ed:993c
db dummy6_1a82c[32]; // 10ed:995c
db dummy6_1a84c[32]; // 10ed:997c
db dummy6_1a86c[32]; // 10ed:999c
db dummy6_1a88c;
db dummy6_1a88d;
db unk_28e6e; // 10ed:99be
db dummy6_1a88f[32]; // 10ed:99bf
db dummy6_1a8af[32]; // 10ed:99df
db dummy6_1a8cf[32]; // 10ed:99ff
db dummy6_1a8ef[32]; // 10ed:9a1f
db dummy6_1a90f[32]; // 10ed:9a3f
db dummy6_1a92f[32]; // 10ed:9a5f
db dummy6_1a94f[32]; // 10ed:9a7f
db dummy6_1a96f[32]; // 10ed:9a9f
db dummy6_1a98f[32]; // 10ed:9abf
db dummy6_1a9af[32]; // 10ed:9adf
db dummy6_1a9cf[32]; // 10ed:9aff
db dummy6_1a9ef[32]; // 10ed:9b1f
db dummy6_1aa0f[32]; // 10ed:9b3f
db dummy6_1aa2f[32]; // 10ed:9b5f
db dummy6_1aa4f[32]; // 10ed:9b7f
db dummy6_1aa6f[32]; // 10ed:9b9f
db dummy6_1aa8f[32]; // 10ed:9bbf
db dummy6_1aaaf[32]; // 10ed:9bdf
db dummy6_1aacf[32]; // 10ed:9bff
db dummy6_1aaef[32]; // 10ed:9c1f
db dummy6_1ab0f[32]; // 10ed:9c3f
db dummy6_1ab2f[32]; // 10ed:9c5f
db dummy6_1ab4f[32]; // 10ed:9c7f
db dummy6_1ab6f[32]; // 10ed:9c9f
db dummy6_1ab8f[32]; // 10ed:9cbf
db dummy6_1abaf[32]; // 10ed:9cdf
db dummy6_1abcf[32]; // 10ed:9cff
db dummy6_1abef[32]; // 10ed:9d1f
db dummy6_1ac0f[32]; // 10ed:9d3f
db dummy6_1ac2f[32]; // 10ed:9d5f
db dummy6_1ac4f[32]; // 10ed:9d7f
db dummy6_1ac6f[32]; // 10ed:9d9f
db dummy6_1ac8f[32]; // 10ed:9dbf
db dummy6_1acaf[32]; // 10ed:9ddf
db dummy6_1accf[32]; // 10ed:9dff
db dummy6_1acef[32]; // 10ed:9e1f
db dummy6_1ad0f[32]; // 10ed:9e3f
db dummy6_1ad2f[32]; // 10ed:9e5f
db dummy6_1ad4f[32]; // 10ed:9e7f
db dummy6_1ad6f[32]; // 10ed:9e9f
db dummy6_1ad8f[32]; // 10ed:9ebf
db dummy6_1adaf[32]; // 10ed:9edf
db dummy6_1adcf[32]; // 10ed:9eff
db dummy6_1adef[32]; // 10ed:9f1f
db dummy6_1ae0f[32]; // 10ed:9f3f
db dummy6_1ae2f[32]; // 10ed:9f5f
db dummy6_1ae4f[32]; // 10ed:9f7f
db dummy6_1ae6f[32]; // 10ed:9f9f
db dummy6_1ae8f[32]; // 10ed:9fbf
db dummy6_1aeaf[32]; // 10ed:9fdf
db dummy6_1aecf[32]; // 10ed:9fff
db dummy6_1aeef[32]; // 10ed:a01f
db dummy6_1af0f[32]; // 10ed:a03f
db dummy6_1af2f[32]; // 10ed:a05f
db dummy6_1af4f[32]; // 10ed:a07f
db dummy6_1af6f[32]; // 10ed:a09f
db dummy6_1af8f[32]; // 10ed:a0bf
db dummy6_1afaf[32]; // 10ed:a0df
db dummy6_1afcf[32]; // 10ed:a0ff
db dummy6_1afef[32]; // 10ed:a11f
db dummy6_1b00f[32]; // 10ed:a13f
db dummy6_1b02f[32]; // 10ed:a15f
db dummy6_1b04f[32]; // 10ed:a17f
db dummy6_1b06f[32]; // 10ed:a19f
db dummy6_1b08f[32]; // 10ed:a1bf
db dummy6_1b0af[32]; // 10ed:a1df
db dummy6_1b0cf[32]; // 10ed:a1ff
db dummy6_1b0ef[32]; // 10ed:a21f
db dummy6_1b10f[32]; // 10ed:a23f
db dummy6_1b12f[32]; // 10ed:a25f
db dummy6_1b14f[32]; // 10ed:a27f
db dummy6_1b16f[32]; // 10ed:a29f
db dummy6_1b18f[32]; // 10ed:a2bf
db dummy6_1b1af[32]; // 10ed:a2df
db dummy6_1b1cf[32]; // 10ed:a2ff
db dummy6_1b1ef[32]; // 10ed:a31f
db dummy6_1b20f[32]; // 10ed:a33f
db dummy6_1b22f;
db dummy6_1b230;
db dummy6_1b231;
db dummy6_1b232;
db dummy6_1b233;
db dummy6_1b234;
db dummy6_1b235;
db dummy6_1b236;
db dummy6_1b237;
db dummy6_1b238;
db dummy6_1b239;
db dummy6_1b23a;
db dummy6_1b23b;
db dummy6_1b23c;
db dummy6_1b23d;
db dummy6_1b23e;
db dummy6_1b23f;
db dummy6_1b240;
db dummy6_1b241;
db dummy6_1b242;
db dummy6_1b243;
db dummy6_1b244;
db dummy6_1b245;
db unk_29826; // 10ed:a376
db dummy6_1b247[32]; // 10ed:a377
db dummy6_1b267[32]; // 10ed:a397
db dummy6_1b287[32]; // 10ed:a3b7
db dummy6_1b2a7[32]; // 10ed:a3d7
db dummy6_1b2c7[32]; // 10ed:a3f7
db dummy6_1b2e7[32]; // 10ed:a417
db dummy6_1b307[32]; // 10ed:a437
db dummy6_1b327[32]; // 10ed:a457
db dummy6_1b347[32]; // 10ed:a477
db dummy6_1b367[32]; // 10ed:a497
db dummy6_1b387[32]; // 10ed:a4b7
db dummy6_1b3a7[32]; // 10ed:a4d7
db dummy6_1b3c7[32]; // 10ed:a4f7
db dummy6_1b3e7[32]; // 10ed:a517
db dummy6_1b407[32]; // 10ed:a537
db dummy6_1b427[32]; // 10ed:a557
db dummy6_1b447[32]; // 10ed:a577
db dummy6_1b467[32]; // 10ed:a597
db dummy6_1b487;
db dummy6_1b488;
db dummy6_1b489;
db dummy6_1b48a;
db dummy6_1b48b;
db dummy6_1b48c;
db dummy6_1b48d;
db dummy6_1b48e;
db unk_29a6f; // 10ed:a5bf
db unk_29a70; // 10ed:a5c0
db dummy6_1b491[32]; // 10ed:a5c1
db dummy6_1b4b1[32]; // 10ed:a5e1
db dummy6_1b4d1[32]; // 10ed:a601
db dummy6_1b4f1[32]; // 10ed:a621
db dummy6_1b511[32]; // 10ed:a641
db dummy6_1b531[32]; // 10ed:a661
db dummy6_1b551[32]; // 10ed:a681
db dummy6_1b571;
db dummy6_1b572;
db dummy6_1b573;
db dummy6_1b574;
db dummy6_1b575;
db dummy6_1b576;
db dummy6_1b577;
db dummy6_1b578;
db dummy6_1b579;
db dummy6_1b57a;
db dummy6_1b57b;
db dummy6_1b57c;
db dummy6_1b57d;
db dummy6_1b57e;
db dummy6_1b57f;
db unk_29b60; // 10ed:a6b0
db dummy6_1b581[32]; // 10ed:a6b1
db dummy6_1b5a1[32]; // 10ed:a6d1
db dummy6_1b5c1[32]; // 10ed:a6f1
db dummy6_1b5e1[32]; // 10ed:a711
db dummy6_1b601[32]; // 10ed:a731
db dummy6_1b621[32]; // 10ed:a751
db dummy6_1b641[32]; // 10ed:a771
db dummy6_1b661[32]; // 10ed:a791
db dummy6_1b681;
db dummy6_1b682;
db dummy6_1b683;
db dummy6_1b684;
db dummy6_1b685;
db dummy6_1b686;
db dummy6_1b687;
db dummy6_1b688;
db dummy6_1b689;
db dummy6_1b68a;
db dummy6_1b68b;
db dummy6_1b68c;
db dummy6_1b68d;
db dummy6_1b68e;
db dummy6_1b68f;
db dummy6_1b690;
db dummy6_1b691;
db unk_29c72; // 10ed:a7c2
db dummy6_1b693[32]; // 10ed:a7c3
db dummy6_1b6b3[32]; // 10ed:a7e3
db dummy6_1b6d3[32]; // 10ed:a803
db dummy6_1b6f3[32]; // 10ed:a823
db dummy6_1b713[32]; // 10ed:a843
db dummy6_1b733[32]; // 10ed:a863
db dummy6_1b753[32]; // 10ed:a883
db dummy6_1b773[32]; // 10ed:a8a3
db dummy6_1b793[32]; // 10ed:a8c3
db dummy6_1b7b3[32]; // 10ed:a8e3
db dummy6_1b7d3[32]; // 10ed:a903
db dummy6_1b7f3[32]; // 10ed:a923
db dummy6_1b813[32]; // 10ed:a943
db dummy6_1b833[32]; // 10ed:a963
db dummy6_1b853[32]; // 10ed:a983
db dummy6_1b873[32]; // 10ed:a9a3
db dummy6_1b893[32]; // 10ed:a9c3
db dummy6_1b8b3[32]; // 10ed:a9e3
db dummy6_1b8d3[32]; // 10ed:aa03
db dummy6_1b8f3[32]; // 10ed:aa23
db dummy6_1b913[32]; // 10ed:aa43
db dummy6_1b933;
db dummy6_1b934;
db dummy6_1b935;
db unk_29f16; // 10ed:aa66
db dummy6_1b937;
db unk_29f18; // 10ed:aa68
db dummy6_1b939;
db dummy6_1b93a;
db dummy6_1b93b;
db dummy6_1b93c;
db dummy6_1b93d;
dw word_29f1e; // 10ed:aa6e
db dummy6_1b940;
db dummy6_1b941;
dw _word_29f22_res_condit_ofs; // 10ed:aa72
dw _word_29f24_res_condit_seg; // 10ed:aa74
dw _word_29f26_res_dialogue_ofs; // 10ed:aa76
dw _word_29f28_res_dialogue_seg; // 10ed:aa78
db dummy6_1b94a[32]; // 10ed:aa7a
db dummy6_1b96a[32]; // 10ed:aa9a
db dummy6_1b98a;
db dummy6_1b98b;
db dummy6_1b98c;
db dummy6_1b98d;
db dummy6_1b98e;
db dummy6_1b98f;
db dummy6_1b990;
db dummy6_1b991;
db dummy6_1b992;
db dummy6_1b993;
db dummy6_1b994;
db dummy6_1b995;
db dummy6_1b996;
db dummy6_1b997;
db dummy6_1b998;
db dummy6_1b999;
db dummy6_1b99a;
db dummy6_1b99b;
db dummy6_1b99c;
db dummy6_1b99d;
db dummy6_1b99e;
db dummy6_1b99f;
db dummy6_1b9a0;
db dummy6_1b9a1;
db dummy6_1b9a2;
db dummy6_1b9a3;
db dummy6_1b9a4;
db dummy6_1b9a5;
dw word_29f86; // 10ed:aad6
db dummy6_1b9a8[32]; // 10ed:aad8
db dummy6_1b9c8[32]; // 10ed:aaf8
db dummy6_1b9e8[32]; // 10ed:ab18
db dummy6_1ba08[32]; // 10ed:ab38
db dummy6_1ba28[32]; // 10ed:ab58
db dummy6_1ba48;
db dummy6_1ba49;
db dummy6_1ba4a;
db dummy6_1ba4b;
db dummy6_1ba4c;
db dummy6_1ba4d;
db dummy6_1ba4e;
db dummy6_1ba4f;
db dummy6_1ba50;
db dummy6_1ba51;
db dummy6_1ba52;
db dummy6_1ba53;
dw word_2a034; // 10ed:ab84
db dummy6_1ba56;
db dummy6_1ba57;
db dummy6_1ba58;
db dummy6_1ba59;
db dummy6_1ba5a;
db dummy6_1ba5b;
db dummy6_1ba5c;
db dummy6_1ba5d;
db dummy6_1ba5e;
db dummy6_1ba5f;
db dummy6_1ba60;
db dummy6_1ba61;
db unk_2a042; // 10ed:ab92
db dummy6_1ba63[32]; // 10ed:ab93
db dummy6_1ba83[32]; // 10ed:abb3
db dummy6_1baa3[32]; // 10ed:abd3
db dummy6_1bac3[32]; // 10ed:abf3
db dummy6_1bae3[32]; // 10ed:ac13
db dummy6_1bb03[32]; // 10ed:ac33
db dummy6_1bb23[32]; // 10ed:ac53
db dummy6_1bb43[32]; // 10ed:ac73
db dummy6_1bb63[32]; // 10ed:ac93
db dummy6_1bb83[32]; // 10ed:acb3
db dummy6_1bba3[32]; // 10ed:acd3
db dummy6_1bbc3[32]; // 10ed:acf3
db dummy6_1bbe3[32]; // 10ed:ad13
db dummy6_1bc03[32]; // 10ed:ad33
db dummy6_1bc23[32]; // 10ed:ad53
db dummy6_1bc43[32]; // 10ed:ad73
db dummy6_1bc63[32]; // 10ed:ad93
db dummy6_1bc83[32]; // 10ed:adb3
db dummy6_1bca3[32]; // 10ed:add3
db dummy6_1bcc3[32]; // 10ed:adf3
db dummy6_1bce3[32]; // 10ed:ae13
db dummy6_1bd03[32]; // 10ed:ae33
db dummy6_1bd23[32]; // 10ed:ae53
db dummy6_1bd43[32]; // 10ed:ae73
db dummy6_1bd63[32]; // 10ed:ae93
db dummy6_1bd83[32]; // 10ed:aeb3
db dummy6_1bda3[32]; // 10ed:aed3
db dummy6_1bdc3[32]; // 10ed:aef3
db dummy6_1bde3;
db dummy6_1bde4;
db dummy6_1bde5;
db dummy6_1bde6;
db dummy6_1bde7;
db dummy6_1bde8;
db dummy6_1bde9;
db dummy6_1bdea;
db dummy6_1bdeb;
db dummy6_1bdec;
db dummy6_1bded;
db dummy6_1bdee;
db dummy6_1bdef;
db dummy6_1bdf0;
db dummy6_1bdf1;
db dummy6_1bdf2;
db dummy6_1bdf3;
db dummy6_1bdf4;
db dummy6_1bdf5;
db unk_2a3d6; // 10ed:af26
db dummy6_1bdf7[32]; // 10ed:af27
db dummy6_1be17[32]; // 10ed:af47
db dummy6_1be37[32]; // 10ed:af67
db dummy6_1be57[32]; // 10ed:af87
db dummy6_1be77[32]; // 10ed:afa7
db dummy6_1be97[32]; // 10ed:afc7
db dummy6_1beb7[32]; // 10ed:afe7
db dummy6_1bed7[32]; // 10ed:b007
db dummy6_1bef7[32]; // 10ed:b027
db dummy6_1bf17[32]; // 10ed:b047
db dummy6_1bf37[32]; // 10ed:b067
db dummy6_1bf57[32]; // 10ed:b087
db dummy6_1bf77[32]; // 10ed:b0a7
db dummy6_1bf97[32]; // 10ed:b0c7
db dummy6_1bfb7[32]; // 10ed:b0e7
db dummy6_1bfd7[32]; // 10ed:b107
db dummy6_1bff7[32]; // 10ed:b127
db dummy6_1c017[32]; // 10ed:b147
db dummy6_1c037[32]; // 10ed:b167
db dummy6_1c057[32]; // 10ed:b187
db dummy6_1c077[32]; // 10ed:b1a7
db dummy6_1c097[32]; // 10ed:b1c7
db dummy6_1c0b7[32]; // 10ed:b1e7
db dummy6_1c0d7[32]; // 10ed:b207
db dummy6_1c0f7;
db dummy6_1c0f8;
db dummy6_1c0f9;
db dummy6_1c0fa;
db dummy6_1c0fb;
db dummy6_1c0fc;
db dummy6_1c0fd;
db dummy6_1c0fe;
db dummy6_1c0ff;
db dummy6_1c100;
db dummy6_1c101;
db dummy6_1c102;
db dummy6_1c103;
db dummy6_1c104;
db dummy6_1c105;
db dummy6_1c106;
db dummy6_1c107;
db dummy6_1c108;
db dummy6_1c109;
db dummy6_1c10a;
db dummy6_1c10b;
db dummy6_1c10c;
db dummy6_1c10d;
db dummy6_1c10e;
db unk_2a6ef; // 10ed:b23f
db dummy6_1c110[32]; // 10ed:b240
db dummy6_1c130[32]; // 10ed:b260
db dummy6_1c150[32]; // 10ed:b280
db dummy6_1c170[32]; // 10ed:b2a0
db dummy6_1c190[32]; // 10ed:b2c0
db dummy6_1c1b0[32]; // 10ed:b2e0
db dummy6_1c1d0[32]; // 10ed:b300
db dummy6_1c1f0[32]; // 10ed:b320
db dummy6_1c210[32]; // 10ed:b340
db dummy6_1c230[32]; // 10ed:b360
db dummy6_1c250[32]; // 10ed:b380
db dummy6_1c270[32]; // 10ed:b3a0
db dummy6_1c290[32]; // 10ed:b3c0
db dummy6_1c2b0[32]; // 10ed:b3e0
db dummy6_1c2d0[32]; // 10ed:b400
db dummy6_1c2f0[32]; // 10ed:b420
db dummy6_1c310[32]; // 10ed:b440
db dummy6_1c330[32]; // 10ed:b460
db dummy6_1c350[32]; // 10ed:b480
db dummy6_1c370[32]; // 10ed:b4a0
db dummy6_1c390[32]; // 10ed:b4c0
db dummy6_1c3b0[32]; // 10ed:b4e0
db dummy6_1c3d0[32]; // 10ed:b500
db dummy6_1c3f0[32]; // 10ed:b520
db dummy6_1c410[32]; // 10ed:b540
db dummy6_1c430[32]; // 10ed:b560
db dummy6_1c450[32]; // 10ed:b580
db dummy6_1c470[32]; // 10ed:b5a0
db dummy6_1c490[32]; // 10ed:b5c0
db dummy6_1c4b0[32]; // 10ed:b5e0
db dummy6_1c4d0[32]; // 10ed:b600
db dummy6_1c4f0[32]; // 10ed:b620
db dummy6_1c510[32]; // 10ed:b640
db dummy6_1c530[32]; // 10ed:b660
db dummy6_1c550[32]; // 10ed:b680
db dummy6_1c570[32]; // 10ed:b6a0
db dummy6_1c590[32]; // 10ed:b6c0
db dummy6_1c5b0[32]; // 10ed:b6e0
db dummy6_1c5d0[32]; // 10ed:b700
db dummy6_1c5f0[32]; // 10ed:b720
db dummy6_1c610[32]; // 10ed:b740
db dummy6_1c630[32]; // 10ed:b760
db dummy6_1c650[32]; // 10ed:b780
db dummy6_1c670[32]; // 10ed:b7a0
db dummy6_1c690[32]; // 10ed:b7c0
db dummy6_1c6b0[32]; // 10ed:b7e0
db dummy6_1c6d0[32]; // 10ed:b800
db dummy6_1c6f0[32]; // 10ed:b820
db dummy6_1c710[32]; // 10ed:b840
db dummy6_1c730[32]; // 10ed:b860
db dummy6_1c750[32]; // 10ed:b880
db dummy6_1c770[32]; // 10ed:b8a0
db dummy6_1c790[32]; // 10ed:b8c0
db dummy6_1c7b0[32]; // 10ed:b8e0
db dummy6_1c7d0[32]; // 10ed:b900
db dummy6_1c7f0[32]; // 10ed:b920
db dummy6_1c810[32]; // 10ed:b940
db dummy6_1c830[32]; // 10ed:b960
db dummy6_1c850[32]; // 10ed:b980
db dummy6_1c870;
db dummy6_1c871;
db dummy6_1c872;
db dummy6_1c873;
db dummy6_1c874;
db dummy6_1c875;
db dummy6_1c876;
db dummy6_1c877;
db dummy6_1c878;
db dummy6_1c879;
db dummy6_1c87a;
db dummy6_1c87b;
db dummy6_1c87c;
db dummy6_1c87d;
db unk_2ae5e; // 10ed:b9ae
db dummy6_1c87f[32]; // 10ed:b9af
db dummy6_1c89f[32]; // 10ed:b9cf
db dummy6_1c8bf[32]; // 10ed:b9ef
db dummy6_1c8df[32]; // 10ed:ba0f
db dummy6_1c8ff[32]; // 10ed:ba2f
db dummy6_1c91f[32]; // 10ed:ba4f
db dummy6_1c93f[32]; // 10ed:ba6f
db dummy6_1c95f[32]; // 10ed:ba8f
db dummy6_1c97f[32]; // 10ed:baaf
db dummy6_1c99f[32]; // 10ed:bacf
db dummy6_1c9bf[32]; // 10ed:baef
db dummy6_1c9df[32]; // 10ed:bb0f
db dummy6_1c9ff[32]; // 10ed:bb2f
db dummy6_1ca1f[32]; // 10ed:bb4f
db dummy6_1ca3f[32]; // 10ed:bb6f
db dummy6_1ca5f[32]; // 10ed:bb8f
db dummy6_1ca7f[32]; // 10ed:bbaf
db dummy6_1ca9f[32]; // 10ed:bbcf
db dummy6_1cabf[32]; // 10ed:bbef
db dummy6_1cadf[32]; // 10ed:bc0f
db dummy6_1caff[32]; // 10ed:bc2f
db dummy6_1cb1f;
db dummy6_1cb20;
db dummy6_1cb21;
db dummy6_1cb22;
db dummy6_1cb23;
db dummy6_1cb24;
db dummy6_1cb25;
db dummy6_1cb26;
db dummy6_1cb27;
db dummy6_1cb28;
db dummy6_1cb29;
db dummy6_1cb2a;
db dummy6_1cb2b;
db dummy6_1cb2c;
db dummy6_1cb2d;
db dummy6_1cb2e;
db dummy6_1cb2f;
db dummy6_1cb30;
db dummy6_1cb31;
db dummy6_1cb32;
db dummy6_1cb33;
db dummy6_1cb34;
db dummy6_1cb35;
db dummy6_1cb36;
db dummy6_1cb37;
db dummy6_1cb38;
db dummy6_1cb39;
db dummy6_1cb3a;
db dummy6_1cb3b;
db dummy6_1cb3c;
db dummy6_1cb3d;
dw _work_2b11e_sal_data; // 10ed:bc6e
db dummy6_1cb40[32]; // 10ed:bc70
db dummy6_1cb60[32]; // 10ed:bc90
db dummy6_1cb80[32]; // 10ed:bcb0
db dummy6_1cba0[32]; // 10ed:bcd0
db dummy6_1cbc0[32]; // 10ed:bcf0
db dummy6_1cbe0[32]; // 10ed:bd10
db dummy6_1cc00[32]; // 10ed:bd30
db dummy6_1cc20[32]; // 10ed:bd50
db dummy6_1cc40[32]; // 10ed:bd70
db dummy6_1cc60[32]; // 10ed:bd90
db dummy6_1cc80[32]; // 10ed:bdb0
db dummy6_1cca0[32]; // 10ed:bdd0
db dummy6_1ccc0[32]; // 10ed:bdf0
db dummy6_1cce0[32]; // 10ed:be10
db dummy6_1cd00[32]; // 10ed:be30
db dummy6_1cd20;
db dummy6_1cd21;
db dummy6_1cd22;
db dummy6_1cd23;
db dummy6_1cd24;
db dummy6_1cd25;
db dummy6_1cd26;
db unk_2b307; // 10ed:be57
db dummy6_1cd28[32]; // 10ed:be58
db dummy6_1cd48[32]; // 10ed:be78
db dummy6_1cd68[32]; // 10ed:be98
db dummy6_1cd88[32]; // 10ed:beb8
db dummy6_1cda8[32]; // 10ed:bed8
db dummy6_1cdc8[32]; // 10ed:bef8
db dummy6_1cde8[32]; // 10ed:bf18
db dummy6_1ce08[32]; // 10ed:bf38
db dummy6_1ce28[32]; // 10ed:bf58
db dummy6_1ce48[32]; // 10ed:bf78
db dummy6_1ce68[32]; // 10ed:bf98
db dummy6_1ce88[32]; // 10ed:bfb8
db dummy6_1cea8[32]; // 10ed:bfd8
db dummy6_1cec8;
db dummy6_1cec9;
db dummy6_1ceca;
db dummy6_1cecb;
db dummy6_1cecc;
db dummy6_1cecd;
db dummy6_1cece;
db unk_2b4af; // 10ed:bfff
db dummy6_1ced0[32]; // 10ed:c000
db dummy6_1cef0[32]; // 10ed:c020
db dummy6_1cf10[32]; // 10ed:c040
db dummy6_1cf30[32]; // 10ed:c060
db dummy6_1cf50;
db dummy6_1cf51;
db dummy6_1cf52;
db dummy6_1cf53;
db dummy6_1cf54;
db dummy6_1cf55;
db dummy6_1cf56;
db dummy6_1cf57;
db dummy6_1cf58;
db unk_2b539; // 10ed:c089
db dummy6_1cf5a[32]; // 10ed:c08a
db dummy6_1cf7a;
db dummy6_1cf7b;
db dummy6_1cf7c;
db unk_2b55d; // 10ed:c0ad
db dummy6_1cf7e;
db dummy6_1cf7f;
db dummy6_1cf80;
db dummy6_1cf81;
db dummy6_1cf82;
db dummy6_1cf83;
db dummy6_1cf84;
db dummy6_1cf85;
db unk_2b566; // 10ed:c0b6
db dummy6_1cf87[32]; // 10ed:c0b7
db dummy6_1cfa7[32]; // 10ed:c0d7
db dummy6_1cfc7[32]; // 10ed:c0f7
db dummy6_1cfe7[32]; // 10ed:c117
db dummy6_1d007[32]; // 10ed:c137
db dummy6_1d027[32]; // 10ed:c157
db dummy6_1d047[32]; // 10ed:c177
db dummy6_1d067[32]; // 10ed:c197
db dummy6_1d087[32]; // 10ed:c1b7
db dummy6_1d0a7[32]; // 10ed:c1d7
db dummy6_1d0c7[32]; // 10ed:c1f7
db dummy6_1d0e7[32]; // 10ed:c217
db dummy6_1d107[32]; // 10ed:c237
db dummy6_1d127[32]; // 10ed:c257
db dummy6_1d147[32]; // 10ed:c277
db dummy6_1d167[32]; // 10ed:c297
db dummy6_1d187[32]; // 10ed:c2b7
db dummy6_1d1a7[32]; // 10ed:c2d7
db dummy6_1d1c7[32]; // 10ed:c2f7
db dummy6_1d1e7[32]; // 10ed:c317
db dummy6_1d207[32]; // 10ed:c337
db dummy6_1d227[32]; // 10ed:c357
db dummy6_1d247[32]; // 10ed:c377
db dummy6_1d267[32]; // 10ed:c397
db dummy6_1d287[32]; // 10ed:c3b7
db dummy6_1d2a7[32]; // 10ed:c3d7
db dummy6_1d2c7[32]; // 10ed:c3f7
db dummy6_1d2e7[32]; // 10ed:c417
db dummy6_1d307[32]; // 10ed:c437
db dummy6_1d327[32]; // 10ed:c457
db dummy6_1d347[32]; // 10ed:c477
db dummy6_1d367[32]; // 10ed:c497
db dummy6_1d387[32]; // 10ed:c4b7
db dummy6_1d3a7[32]; // 10ed:c4d7
db dummy6_1d3c7[32]; // 10ed:c4f7
db dummy6_1d3e7[32]; // 10ed:c517
db dummy6_1d407[32]; // 10ed:c537
db dummy6_1d427[32]; // 10ed:c557
db dummy6_1d447[32]; // 10ed:c577
db dummy6_1d467[32]; // 10ed:c597
db dummy6_1d487[32]; // 10ed:c5b7
db dummy6_1d4a7[32]; // 10ed:c5d7
db dummy6_1d4c7;
db dummy6_1d4c8;
db dummy6_1d4c9;
db dummy6_1d4ca;
db dummy6_1d4cb;
db unk_2baac; // 10ed:c5fc
db dummy6_1d4cd[32]; // 10ed:c5fd
db dummy6_1d4ed[32]; // 10ed:c61d
db dummy6_1d50d[32]; // 10ed:c63d
db dummy6_1d52d[32]; // 10ed:c65d
db dummy6_1d54d[32]; // 10ed:c67d
db dummy6_1d56d[32]; // 10ed:c69d
db dummy6_1d58d[32]; // 10ed:c6bd
db dummy6_1d5ad[32]; // 10ed:c6dd
db dummy6_1d5cd[32]; // 10ed:c6fd
db dummy6_1d5ed[32]; // 10ed:c71d
db dummy6_1d60d[32]; // 10ed:c73d
db dummy6_1d62d[32]; // 10ed:c75d
db dummy6_1d64d[32]; // 10ed:c77d
db dummy6_1d66d[32]; // 10ed:c79d
db dummy6_1d68d[32]; // 10ed:c7bd
db dummy6_1d6ad[32]; // 10ed:c7dd
db dummy6_1d6cd[32]; // 10ed:c7fd
db dummy6_1d6ed[32]; // 10ed:c81d
db dummy6_1d70d[32]; // 10ed:c83d
db dummy6_1d72d[32]; // 10ed:c85d
db dummy6_1d74d[32]; // 10ed:c87d
db dummy6_1d76d[32]; // 10ed:c89d
db dummy6_1d78d[32]; // 10ed:c8bd
db dummy6_1d7ad[32]; // 10ed:c8dd
db dummy6_1d7cd[32]; // 10ed:c8fd
db dummy6_1d7ed[32]; // 10ed:c91d
db dummy6_1d80d[32]; // 10ed:c93d
db dummy6_1d82d[32]; // 10ed:c95d
db dummy6_1d84d[32]; // 10ed:c97d
db dummy6_1d86d[32]; // 10ed:c99d
db dummy6_1d88d[32]; // 10ed:c9bd
db dummy6_1d8ad[32]; // 10ed:c9dd
db dummy6_1d8cd[32]; // 10ed:c9fd
db dummy6_1d8ed[32]; // 10ed:ca1d
db dummy6_1d90d[32]; // 10ed:ca3d
db dummy6_1d92d[32]; // 10ed:ca5d
db dummy6_1d94d[32]; // 10ed:ca7d
db dummy6_1d96d[32]; // 10ed:ca9d
db dummy6_1d98d[32]; // 10ed:cabd
db dummy6_1d9ad[32]; // 10ed:cadd
db dummy6_1d9cd[32]; // 10ed:cafd
db dummy6_1d9ed[32]; // 10ed:cb1d
db dummy6_1da0d[32]; // 10ed:cb3d
db dummy6_1da2d[32]; // 10ed:cb5d
db dummy6_1da4d[32]; // 10ed:cb7d
db dummy6_1da6d[32]; // 10ed:cb9d
db dummy6_1da8d;
db dummy6_1da8e;
db dummy6_1da8f;
db dummy6_1da90;
db dummy6_1da91;
db dummy6_1da92;
db dummy6_1da93;
db dummy6_1da94;
db dummy6_1da95;
db dummy6_1da96;
db dummy6_1da97;
db dummy6_1da98;
db dummy6_1da99;
db dummy6_1da9a;
db dummy6_1da9b;
db dummy6_1da9c;
db dummy6_1da9d;
db dummy6_1da9e;
db dummy6_1da9f;
db dummy6_1daa0;
db unk_2c081; // 10ed:cbd1
db dummy6_1daa2[32]; // 10ed:cbd2
db dummy6_1dac2[32]; // 10ed:cbf2
db dummy6_1dae2[32]; // 10ed:cc12
db dummy6_1db02[32]; // 10ed:cc32
db dummy6_1db22[32]; // 10ed:cc52
db dummy6_1db42[32]; // 10ed:cc72
db dummy6_1db62;
db dummy6_1db63;
dw dummy6_1db64;
db dummy6_1db66[32]; // 10ed:cc96
db dummy6_1db86[32]; // 10ed:ccb6
db dummy6_1dba6[32]; // 10ed:ccd6
db dummy6_1dbc6[32]; // 10ed:ccf6
db dummy6_1dbe6[32]; // 10ed:cd16
db dummy6_1dc06[32]; // 10ed:cd36
db dummy6_1dc26[32]; // 10ed:cd56
db dummy6_1dc46[32]; // 10ed:cd76
db dummy6_1dc66[32]; // 10ed:cd96
db dummy6_1dc86[32]; // 10ed:cdb6
db dummy6_1dca6[32]; // 10ed:cdd6
db dummy6_1dcc6[32]; // 10ed:cdf6
db dummy6_1dce6[32]; // 10ed:ce16
db dummy6_1dd06[32]; // 10ed:ce36
db dummy6_1dd26;
db dummy6_1dd27;
db dummy6_1dd28;
db dummy6_1dd29;
db dummy6_1dd2a;
db dummy6_1dd2b;
db dummy6_1dd2c;
db dummy6_1dd2d;
db dummy6_1dd2e;
db dummy6_1dd2f;
db dummy6_1dd30;
db dummy6_1dd31;
db dummy6_1dd32;
db dummy6_1dd33;
db dummy6_1dd34;
db dummy6_1dd35;
db byte_2c316; // 10ed:ce66
db dummy6_1dd37;
dw _word_2c318_allocator_last_free_seg; // 10ed:ce68
dd dword_2c31a; // 10ed:ce6a
dw word_2c31e; // 10ed:ce6e
db byte_2c320; // 10ed:ce70
db _byte_2c321_disable_hsq; // 10ed:ce71
db byte_2c322; // 10ed:ce72
db byte_2c323; // 10ed:ce73
dw _unk_2c324_vga_framebuffer_size; // 10ed:ce74
db _unk_2c326_default_drive; // 10ed:ce76
db _unk_2c327_default_drive; // 10ed:ce77
dw _word_2c328_resource_index; // 10ed:ce78
dw _word_2c32a_pit_timer_callback_counter; // 10ed:ce7a
db unk_2c32c; // 10ed:ce7c
db dummy6_1dd4d;
db dummy6_1dd4e;
db dummy6_1dd4f;
db byte_2c330; // 10ed:ce80
db _unk_2c331_key_pressed_array; // 10ed:ce81
db dummy6_1dd52;
db dummy6_1dd53;
db dummy6_1dd54;
db dummy6_1dd55;
db dummy6_1dd56;
db dummy6_1dd57;
db dummy6_1dd58;
db dummy6_1dd59;
db dummy6_1dd5a;
db dummy6_1dd5b;
db dummy6_1dd5c;
db dummy6_1dd5d;
db dummy6_1dd5e;
db dummy6_1dd5f;
db dummy6_1dd60;
db dummy6_1dd61;
db dummy6_1dd62;
db dummy6_1dd63;
db dummy6_1dd64;
db dummy6_1dd65;
db dummy6_1dd66;
db dummy6_1dd67;
db dummy6_1dd68;
db dummy6_1dd69;
db _byte_2c34a_key_p_status; // 10ed:ce9a
db dummy6_1dd6b;
db dummy6_1dd6c;
db _byte_2c34d_key_enter_status; // 10ed:ce9d
db _byte_2c34e_key_w_status; // 10ed:ce9e
db dummy6_1dd6f;
db dummy6_1dd70;
db dummy6_1dd71;
db dummy6_1dd72;
db dummy6_1dd73;
db dummy6_1dd74;
db dummy6_1dd75;
db dummy6_1dd76;
db dummy6_1dd77;
db dummy6_1dd78;
db dummy6_1dd79;
db dummy6_1dd7a;
db dummy6_1dd7b;
db dummy6_1dd7c;
db dummy6_1dd7d;
db dummy6_1dd7e;
db dummy6_1dd7f;
db dummy6_1dd80;
db dummy6_1dd81;
db dummy6_1dd82;
db dummy6_1dd83;
db dummy6_1dd84;
db dummy6_1dd85;
db dummy6_1dd86;
db dummy6_1dd87;
db dummy6_1dd88;
db byte_2c369; // 10ed:ceb9
db byte_2c36a; // 10ed:ceba
db dummy6_1dd8b[32]; // 10ed:cebb
db dummy6_1ddab;
db byte_2c38c; // 10ed:cedc
db dummy6_1ddad;
db dummy6_1ddae;
db byte_2c38f; // 10ed:cedf
db dummy6_1ddb0;
db byte_2c391; // 10ed:cee1
db dummy6_1ddb2;
db dummy6_1ddb3;
db byte_2c394; // 10ed:cee4
db dummy6_1ddb5;
db dummy6_1ddb6;
db dummy6_1ddb7;
db _byte_2c398_key_hit_qq; // 10ed:cee8
db byte_2c399; // 10ed:cee9
db _byte_2c39a_reset_keyboard_counter; // 10ed:ceea
db _byte_2c39b_language_setting; // 10ed:ceeb
db unk_2c39c; // 10ed:ceec
db dummy6_1ddbd[32]; // 10ed:ceed
db dummy6_1dddd[32]; // 10ed:cf0d
db dummy6_1ddfd[32]; // 10ed:cf2d
db dummy6_1de1d;
db dummy6_1de1e;
db dummy6_1de1f;
db dummy6_1de20;
db dummy6_1de21;
db dummy6_1de22;
db dummy6_1de23;
db dummy6_1de24;
db dummy6_1de25;
db dummy6_1de26;
db dummy6_1de27;
db dummy6_1de28;
db dummy6_1de29;
db dummy6_1de2a;
db dummy6_1de2b;
db dummy6_1de2c;
db dummy6_1de2d;
db dummy6_1de2e;
db dummy6_1de2f;
db dummy6_1de30;
db dummy6_1de31;
db dummy6_1de32;
db dummy6_1de33;
db dummy6_1de34;
db dummy6_1de35;
db dummy6_1de36;
db dummy6_1de37;
db dummy6_1de38;
db dummy6_1de39;
db dummy6_1de3a;
db dummy6_1de3b;
db unk_2c41c; // 10ed:cf6c
db dummy6_1de3d[32]; // 10ed:cf6d
db dummy6_1de5d[32]; // 10ed:cf8d
db dummy6_1de7d[32]; // 10ed:cfad
db dummy6_1de9d[32]; // 10ed:cfcd
db dummy6_1debd[32]; // 10ed:cfed
db dummy6_1dedd[32]; // 10ed:d00d
db dummy6_1defd[32]; // 10ed:d02d
db dummy6_1df1d[32]; // 10ed:d04d
db dummy6_1df3d[32]; // 10ed:d06d
db dummy6_1df5d;
db dummy6_1df5e;
db dummy6_1df5f;
db dummy6_1df60;
db dummy6_1df61;
db dummy6_1df62;
db dummy6_1df63;
db dummy6_1df64;
db dummy6_1df65;
db unk_2c546; // 10ed:d096
db dummy6_1df67[32]; // 10ed:d097
db dummy6_1df87;
db dummy6_1df88;
db dummy6_1df89;
db dummy6_1df8a;
db dummy6_1df8b;
db dummy6_1df8c;
db dummy6_1df8d;
db dummy6_1df8e;
db dummy6_1df8f;
db dummy6_1df90;
db dummy6_1df91;
db dummy6_1df92;
db dummy6_1df93;
db dummy6_1df94;
db dummy6_1df95;
db dummy6_1df96;
db dummy6_1df97;
db dummy6_1df98;
db dummy6_1df99;
db dummy6_1df9a;
db dummy6_1df9b;
db dummy6_1df9c;
db dummy6_1df9d;
db dummy6_1df9e;
db dummy6_1df9f;
db dummy6_1dfa0;
db unk_2c581; // 10ed:d0d1
db dummy6_1dfa2[32]; // 10ed:d0d2
db dummy6_1dfc2;
db dummy6_1dfc3;
db dummy6_1dfc4;
db dummy6_1dfc5;
db dummy6_1dfc6;
db dummy6_1dfc7;
db dummy6_1dfc8;
db dummy6_1dfc9;
db dummy6_1dfca;
db dummy6_1dfcb;
db dummy6_1dfcc;
db dummy6_1dfcd;
db dummy6_1dfce;
db unk_2c5af; // 10ed:d0ff
db dummy6_1dfd0[32]; // 10ed:d100
db dummy6_1dff0;
db dummy6_1dff1;
db dummy6_1dff2;
db dummy6_1dff3;
db dummy6_1dff4;
db dummy6_1dff5;
db dummy6_1dff6;
db dummy6_1dff7;
db dummy6_1dff8;
db dummy6_1dff9;
db dummy6_1dffa;
db dummy6_1dffb;
db dummy6_1dffc;
db dummy6_1dffd;
db dummy6_1dffe;
db unk_2c5df; // 10ed:d12f
db dummy6_1e000[32]; // 10ed:d130
db dummy6_1e020[32]; // 10ed:d150
db dummy6_1e040[32]; // 10ed:d170
db dummy6_1e060[32]; // 10ed:d190
db dummy6_1e080[32]; // 10ed:d1b0
db dummy6_1e0a0[32]; // 10ed:d1d0
db dummy6_1e0c0[32]; // 10ed:d1f0
db dummy6_1e0e0[32]; // 10ed:d210
db dummy6_1e100[32]; // 10ed:d230
db dummy6_1e120[32]; // 10ed:d250
db dummy6_1e140[32]; // 10ed:d270
db dummy6_1e160[32]; // 10ed:d290
db dummy6_1e180[32]; // 10ed:d2b0
db dummy6_1e1a0[32]; // 10ed:d2d0
db dummy6_1e1c0[32]; // 10ed:d2f0
db dummy6_1e1e0[32]; // 10ed:d310
db dummy6_1e200[32]; // 10ed:d330
db dummy6_1e220[32]; // 10ed:d350
db dummy6_1e240[32]; // 10ed:d370
db dummy6_1e260[32]; // 10ed:d390
db dummy6_1e280[32]; // 10ed:d3b0
db dummy6_1e2a0[32]; // 10ed:d3d0
db dummy6_1e2c0[32]; // 10ed:d3f0
db dummy6_1e2e0[32]; // 10ed:d410
db dummy6_1e300[32]; // 10ed:d430
db dummy6_1e320[32]; // 10ed:d450
db dummy6_1e340[32]; // 10ed:d470
db dummy6_1e360[32]; // 10ed:d490
db dummy6_1e380[32]; // 10ed:d4b0
db dummy6_1e3a0[32]; // 10ed:d4d0
db dummy6_1e3c0[32]; // 10ed:d4f0
db dummy6_1e3e0[32]; // 10ed:d510
db dummy6_1e400[32]; // 10ed:d530
db dummy6_1e420[32]; // 10ed:d550
db dummy6_1e440[32]; // 10ed:d570
db dummy6_1e460[32]; // 10ed:d590
db dummy6_1e480[32]; // 10ed:d5b0
db dummy6_1e4a0[32]; // 10ed:d5d0
db dummy6_1e4c0[32]; // 10ed:d5f0
db dummy6_1e4e0[32]; // 10ed:d610
db dummy6_1e500[32]; // 10ed:d630
db dummy6_1e520[32]; // 10ed:d650
db dummy6_1e540[32]; // 10ed:d670
db dummy6_1e560[32]; // 10ed:d690
db dummy6_1e580[32]; // 10ed:d6b0
db dummy6_1e5a0[32]; // 10ed:d6d0
db dummy6_1e5c0[32]; // 10ed:d6f0
db dummy6_1e5e0[32]; // 10ed:d710
db dummy6_1e600[32]; // 10ed:d730
db dummy6_1e620[32]; // 10ed:d750
db dummy6_1e640[32]; // 10ed:d770
db dummy6_1e660[32]; // 10ed:d790
db dummy6_1e680[32]; // 10ed:d7b0
db dummy6_1e6a0[32]; // 10ed:d7d0
db dummy6_1e6c0[32]; // 10ed:d7f0
db dummy6_1e6e0;
db dummy6_1e6e1;
db dummy6_1e6e2;
db dummy6_1e6e3;
dw word_2ccc4; // 10ed:d814
dw _unk_2ccc6_sav_file_first_word; // 10ed:d816
dw word_2ccc8; // 10ed:d818
dw word_2ccca; // 10ed:d81a
db dummy6_1e6ec;
db dummy6_1e6ed;
db dummy6_1e6ee;
db dummy6_1e6ef;
dw word_2ccd0; // 10ed:d820
db dummy6_1e6f2;
db dummy6_1e6f3;
db _unk_2ccd4_bios_timer_count_1; // 10ed:d824
db dummy6_1e6f5;
dw _unk_2ccd6_bios_timer_count_2; // 10ed:d826
dw _unk_2ccd8_bios_timer_count_3; // 10ed:d828
db dummy6_1e6fa;
db dummy6_1e6fb;
dw word_2ccdc; // 10ed:d82c
dw word_2ccde; // 10ed:d82e
dw word_2cce0; // 10ed:d830
dw word_2cce2; // 10ed:d832
db unk_2cce4; // 10ed:d834
db dummy6_1e705;
db unk_2cce6; // 10ed:d836
db dummy6_1e707;
db unk_2cce8; // 10ed:d838
db dummy6_1e709;
dw word_2ccea; // 10ed:d83a
db dummy6_1e70c;
db dummy6_1e70d;
db dummy6_1e70e;
db dummy6_1e70f;
db dummy6_1e710;
db dummy6_1e711;
db dummy6_1e712;
db dummy6_1e713;
db unk_2ccf4; // 10ed:d844
db dummy6_1e715;
db unk_2ccf6; // 10ed:d846
db dummy6_1e717;
db dummy6_1e718;
db dummy6_1e719;
db unk_2ccfa; // 10ed:d84a
db dummy6_1e71b[32]; // 10ed:d84b
db dummy6_1e73b[32]; // 10ed:d86b
db dummy6_1e75b[32]; // 10ed:d88b
db dummy6_1e77b[32]; // 10ed:d8ab
db dummy6_1e79b[32]; // 10ed:d8cb
db dummy6_1e7bb[32]; // 10ed:d8eb
db dummy6_1e7db;
db dummy6_1e7dc;
db dummy6_1e7dd;
db dummy6_1e7de;
db dummy6_1e7df;
db dummy6_1e7e0;
db dummy6_1e7e1;
db dummy6_1e7e2;
db dummy6_1e7e3;
db dummy6_1e7e4;
db dummy6_1e7e5;
db dummy6_1e7e6;
db unk_2cdc7; // 10ed:d917
db dummy6_1e7e8[32]; // 10ed:d918
db dummy6_1e808[32]; // 10ed:d938
db dummy6_1e828[32]; // 10ed:d958
db dummy6_1e848[32]; // 10ed:d978
db dummy6_1e868[32]; // 10ed:d998
db dummy6_1e888[32]; // 10ed:d9b8
db dummy6_1e8a8[32]; // 10ed:d9d8
db dummy6_1e8c8[32]; // 10ed:d9f8
db dummy6_1e8e8[32]; // 10ed:da18
db dummy6_1e908[32]; // 10ed:da38
db dummy6_1e928[32]; // 10ed:da58
db dummy6_1e948;
db dummy6_1e949;
db dummy6_1e94a;
db dummy6_1e94b;
db dummy6_1e94c;
db dummy6_1e94d;
db dummy6_1e94e;
db dummy6_1e94f;
db dummy6_1e950;
db dummy6_1e951;
db dummy6_1e952;
db dummy6_1e953;
db dummy6_1e954;
db dummy6_1e955;
db dummy6_1e956;
db dummy6_1e957;
db dummy6_1e958;
db dummy6_1e959;
db dummy6_1e95a;
db dummy6_1e95b;
dw _word_2cf3c_open_res_info; // 10ed:da8c
db dummy6_1e95e[32]; // 10ed:da8e
db dummy6_1e97e[32]; // 10ed:daae
db dummy6_1e99e[32]; // 10ed:dace
db dummy6_1e9be[32]; // 10ed:daee
db dummy6_1e9de[32]; // 10ed:db0e
db dummy6_1e9fe[32]; // 10ed:db2e
db dummy6_1ea1e[32]; // 10ed:db4e
db dummy6_1ea3e[32]; // 10ed:db6e
db dummy6_1ea5e[32]; // 10ed:db8e
db dummy6_1ea7e;
db dummy6_1ea7f;
dd _dword_2d060_sprite_sheet_resource_ptr; // 10ed:dbb0
db byte_2d064; // 10ed:dbb4
db _byte_2d065_hnm_flag_msb; // 10ed:dbb5
dd dword_2d066; // 10ed:dbb6
dw _2d06a_dune_dat_file_handle; // 10ed:dbba
dd _dword_2d06c_dnmaj_func_ptr_2; // 10ed:dbbc
dw word_2d070; // 10ed:dbc0
dw word_2d072; // 10ed:dbc2
dw word_2d074; // 10ed:dbc4
dw word_2d076; // 10ed:dbc6
dw word_2d078; // 10ed:dbc8
db byte_2d07a; // 10ed:dbca
db unk_2d07b; // 10ed:dbcb
db unk_2d07c; // 10ed:dbcc
db _unk_2d07d_midi_func_return_value; // 10ed:dbcd
dw _word_2d07e_midi_func_5_return_bx; // 10ed:dbce
dw _word_2d080_midi_func_5_return_cx; // 10ed:dbd0
dw word_2d082; // 10ed:dbd2
dw word_2d084; // 10ed:dbd4
dw _word_2d086_framebuffer_front; // 10ed:dbd6
dw _word_2d088_screen_buffer; // 10ed:dbd8
dw _word_2d08a_framebuffer_active; // 10ed:dbda
dw _word_2d08c_framebuffer2_ofs; // 10ed:dbdc
dw _word_2d08e_framebuffer2_seg; // 10ed:dbde
db dummy6_1eab0;
db dummy6_1eab1;
db dummy6_1eab2;
db dummy6_1eab3;
dw word_2d094; // 10ed:dbe4
db byte_2d096; // 10ed:dbe6
db _byte_2d097_hnm_finished_flag; // 10ed:dbe7
dw _word_2d098_hnm_frame_counter; // 10ed:dbe8
dw _word_2d09a_hnm_counter_2; // 10ed:dbea
dw word_2d09c; // 10ed:dbec
dw word_2d09e; // 10ed:dbee
db dummy6_1eac0;
db dummy6_1eac1;
db dummy6_1eac2;
db dummy6_1eac3;
db dummy6_1eac4;
db dummy6_1eac5;
dw word_2d0a6; // 10ed:dbf6
dw word_2d0a8; // 10ed:dbf8
dw word_2d0aa; // 10ed:dbfa
dw word_2d0ac; // 10ed:dbfc
dw _word_2d0ae_current_hnm_resource_flag; // 10ed:dbfe
dw _word_2d0b0_hnm_video_id; // 10ed:dc00
dw _word_2d0b2_hnm_active_video_id; // 10ed:dc02
dw _word_2d0b4_hnm_file_offset_lo; // 10ed:dc04
dw _word_2d0b6_hnm_file_offset_hi; // 10ed:dc06
dw _word_2d0b8_hnm_file_remain_lo; // 10ed:dc08
dw _word_2d0ba_hnm_file_remain_hi; // 10ed:dc0a
dd _dword_2d0bc_hnm_file_read_buf_seg; // 10ed:dc0c
dd _dword_2d0c0_hnm_file_read_buf_ofs; // 10ed:dc10
dw _word_2d0c4_video_decode_buf_ofs; // 10ed:dc14
dw _word_2d0c6_video_decode_buf_seg; // 10ed:dc16
dw word_2d0c8; // 10ed:dc18
dw word_2d0ca; // 10ed:dc1a
dw _word_2d0cc_hnm_sd_block_ofs; // 10ed:dc1c
dw _word_2d0ce_hnm_pl_block_ofs; // 10ed:dc1e
dw word_2d0d0; // 10ed:dc20
dw word_2d0d2; // 10ed:dc22
dw _word_2d0d4_video_chunk_tag; // 10ed:dc24
dw _word_2d0d6_pcm_voc_lipsync_data; // 10ed:dc26
dw word_2d0d8; // 10ed:dc28
db byte_2d0da; // 10ed:dc2a
db byte_2d0db; // 10ed:dc2b
dw word_2d0dc; // 10ed:dc2c
dw word_2d0de; // 10ed:dc2e
dw word_2d0e0; // 10ed:dc30
dw _word_2d0e2_framebuffer_back; // 10ed:dc32
dw word_2d0e4; // 10ed:dc34
dw _word_2d0e6_mouse_pos_y; // 10ed:dc36
dw _word_2d0e8_mouse_pos_x; // 10ed:dc38
db _ptr_2d0ea_mouse_clip_region; // 10ed:dc3a
db dummy6_1eb0b;
db dummy6_1eb0c;
db dummy6_1eb0d;
db dummy6_1eb0e;
db dummy6_1eb0f;
db dummy6_1eb10;
db dummy6_1eb11;
dw _word_2d0f2_mouse_draw_pos_y; // 10ed:dc42
dw _word_2d0f4_mouse_draw_pos_x; // 10ed:dc44
db _byte_2d0f6_cursor_hide_counter; // 10ed:dc46
db _byte_2d0f7_cursor_unk_q; // 10ed:dc47
dw word_2d0f8; // 10ed:dc48
db byte_2d0fa; // 10ed:dc4a
db byte_2d0fb; // 10ed:dc4b
dw word_2d0fc; // 10ed:dc4c
dw word_2d0fe; // 10ed:dc4e
db unk_2d100; // 10ed:dc50
dw word_2d101; // 10ed:dc51
dw word_2d103; // 10ed:dc53
db unk_2d105; // 10ed:dc55
db dummy6_1eb26;
db dummy6_1eb27;
dw word_2d108; // 10ed:dc58
dw word_2d10a; // 10ed:dc5a
dw word_2d10c; // 10ed:dc5c
dw word_2d10e; // 10ed:dc5e
dw word_2d110; // 10ed:dc60
dw word_2d112; // 10ed:dc62
dw word_2d114; // 10ed:dc64
dw word_2d116; // 10ed:dc66
dw word_2d118; // 10ed:dc68
dw word_2d11a; // 10ed:dc6a
db dummy6_1eb3c[32]; // 10ed:dc6c
db dummy6_1eb5c[32]; // 10ed:dc8c
db dummy6_1eb7c[32]; // 10ed:dcac
db dummy6_1eb9c;
db dummy6_1eb9d;
db dummy6_1eb9e;
db dummy6_1eb9f;
db dummy6_1eba0;
db dummy6_1eba1;
db dummy6_1eba2;
db dummy6_1eba3;
db dummy6_1eba4;
db dummy6_1eba5;
db dummy6_1eba6;
db dummy6_1eba7;
db dummy6_1eba8;
db dummy6_1eba9;
db dummy6_1ebaa;
db dummy6_1ebab;
db dummy6_1ebac;
db dummy6_1ebad;
db dummy6_1ebae;
db dummy6_1ebaf;
db dummy6_1ebb0;
db dummy6_1ebb1;
db dummy6_1ebb2;
db dummy6_1ebb3;
db dummy6_1ebb4;
db dummy6_1ebb5;
db _byte_2d196_in_transitionque; // 10ed:dce6
db byte_2d197; // 10ed:dce7
db dummy6_1ebb8;
db dummy6_1ebb9;
db dummy6_1ebba;
db dummy6_1ebbb;
db dummy6_1ebbc;
db dummy6_1ebbd;
db dummy6_1ebbe;
db dummy6_1ebbf;
db dummy6_1ebc0;
db byte_2d1a1; // 10ed:dcf1
dw word_2d1a2; // 10ed:dcf2
dw word_2d1a4; // 10ed:dcf4
dw word_2d1a6; // 10ed:dcf6
dw word_2d1a8; // 10ed:dcf8
dw word_2d1aa; // 10ed:dcfa
dw word_2d1ac; // 10ed:dcfc
dd _unk_2d1ae_res_map; // 10ed:dcfe
db byte_2d1b2; // 10ed:dd02
db byte_2d1b3; // 10ed:dd03
db dummy6_1ebd4;
db dummy6_1ebd5;
db unk_2d1b6; // 10ed:dd06
db dummy6_1ebd7;
db dummy6_1ebd8;
db dummy6_1ebd9;
db dummy6_1ebda;
db dummy6_1ebdb;
db dummy6_1ebdc;
db dummy6_1ebdd;
db dummy6_1ebde;
dw word_2d1bf; // 10ed:dd0f
db dummy6_1ebe1;
db dummy6_1ebe2;
db dummy6_1ebe3;
db dummy6_1ebe4;
db dummy6_1ebe5;
db dummy6_1ebe6;
db dummy6_1ebe7;
db dummy6_1ebe8;
db dummy6_1ebe9;
db dummy6_1ebea;
db dummy6_1ebeb;
db dummy6_1ebec;
db _unk_2d1cd_top_of_mem; // 10ed:dd1d

#ifdef DOSBOX
    db filll[1024*1024*16];
#endif
                        db stack[STACK_SIZE];
                        db heap[HEAP_SIZE];
                };
}
#pragma pack(pop)

#endif
