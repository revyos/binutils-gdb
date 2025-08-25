// clang-format off
#define XUANTIE_DEFINE_riscv_opcodes \
/* Xuantie coprocessor instruction.  */ \
{"th.cpx0",   0, INSN_CLASS_XTHEADCBI, "Xtu2@30,s,Xti10h5@20l5@7", MATCH_TH_CPX0,   MASK_TH_CPX0,   match_opcode, 0 }, \
{"th.cpx1",   0, INSN_CLASS_XTHEADCBI, "Xtu2@30,s",               MATCH_TH_CPX1,   MASK_TH_CPX1,   match_opcode, 0 }, \
{"th.cpx2",   0, INSN_CLASS_XTHEADCBI, "Xtu2@30,d,s,Xtu5@20",      MATCH_TH_CPX2,   MASK_TH_CPX2,   match_opcode, 0 }, \
{"th.cpx3",   0, INSN_CLASS_XTHEADCBI, "Xtu2@30,d,s",             MATCH_TH_CPX3,   MASK_TH_CPX3,   match_opcode, 0 }, \
{"th.cpx4",   0, INSN_CLASS_XTHEADCBI, "Xtu2@30,s,t,Xtu5@7",       MATCH_TH_CPX4,   MASK_TH_CPX4,   match_opcode, 0 }, \
{"th.cpx5",   0, INSN_CLASS_XTHEADCBI, "Xtu2@30,s,t",             MATCH_TH_CPX5,   MASK_TH_CPX5,   match_opcode, 0 }, \
{"th.cpx6",   0, INSN_CLASS_XTHEADCBI, "Xtu2@30,d,s,t",           MATCH_TH_CPX6,   MASK_TH_CPX6,   match_opcode, 0 }, \
{"th.cpx7",   0, INSN_CLASS_XTHEADCEI, "Xtu2@30,d,s,t",           MATCH_TH_CPX7,   MASK_TH_CPX7,   match_opcode, 0 }, \
{"th.cpx8",   0, INSN_CLASS_XTHEADCEI, "Xtu2@30,d,s,t",           MATCH_TH_CPX8,   MASK_TH_CPX8,   match_opcode, 0 }, \
{"th.cpx9",   0, INSN_CLASS_XTHEADCBI, "Xtu2@30,d,s,Xtu10@20",     MATCH_TH_CPX9,   MASK_TH_CPX9,   match_opcode, 0 }, \
{"th.cpx10",  0, INSN_CLASS_XTHEADCBI, "Xtu2@30,d,Xtu10@15",       MATCH_TH_CPX10,  MASK_TH_CPX10,  match_opcode, 0 }, \
{"th.vcpx0",  0, INSN_CLASS_XTHEADCV, "Xtu2@30,VtVm",            MATCH_TH_VCPX0,  MASK_TH_VCPX0,  match_opcode, 0 }, \
{"th.vcpx1",  0, INSN_CLASS_XTHEADCV, "Xtu2@30,Vd,VtVm",         MATCH_TH_VCPX1,  MASK_TH_VCPX1,  match_opcode, 0 }, \
{"th.vcpx2",  0, INSN_CLASS_XTHEADCV, "Xtu2@30,Vt,Xtu5@15Vm",     MATCH_TH_VCPX2,  MASK_TH_VCPX2,  match_opcode, 0 }, \
{"th.vcpx3",  0, INSN_CLASS_XTHEADCV, "Xtu2@30,Vd,Vt,Xtu5@15Vm",  MATCH_TH_VCPX3,  MASK_TH_VCPX3,  match_opcode, 0 }, \
{"th.vcpx4",  0, INSN_CLASS_XTHEADCV, "Xtu2@30,Vd,Vt,VsVm",      MATCH_TH_VCPX4,  MASK_TH_VCPX4,  match_opcode, 0 }, \
{"th.vcpx5",  0, INSN_CLASS_XTHEADCV, "Xtu2@30,Vd,Vt,VsVm",      MATCH_TH_VCPX5,  MASK_TH_VCPX5,  match_opcode, 0 }, \
{"th.vcpx6",  0, INSN_CLASS_XTHEADCV, "Xtu2@30,Vd,Vt,sVm",       MATCH_TH_VCPX6,  MASK_TH_VCPX6,  match_opcode, 0 }, \
{"th.vcpx7",  0, INSN_CLASS_XTHEADCV, "Xtu2@30,Vd,Vt,sVm",       MATCH_TH_VCPX7,  MASK_TH_VCPX7,  match_opcode, 0 }, \
{"th.vcpx8",  0, INSN_CLASS_XTHEADCV, "Xtu2@30,Vd,Vt,Xtu5@15Vm",  MATCH_TH_VCPX8,  MASK_TH_VCPX8,  match_opcode, 0 }, \
{"th.vcpx9",  0, INSN_CLASS_XTHEADCV, "Xtu2@30,Vd,Vt,SVm",       MATCH_TH_VCPX9,  MASK_TH_VCPX9,  match_opcode, 0 }, \
{"th.vcpx10", 0, INSN_CLASS_XTHEADCV, "Xtu2@30,Vd,Vt,SVm",       MATCH_TH_VCPX10, MASK_TH_VCPX10, match_opcode, 0 }, \
{"th.fcpx0",  0, INSN_CLASS_XTHEADCF, "Xtu2@30,S",               MATCH_TH_FCPX0,  MASK_TH_FCPX0,  match_opcode, 0 }, \
{"th.fcpx1",  0, INSN_CLASS_XTHEADCF, "Xtu2@30,D,S",             MATCH_TH_FCPX1,  MASK_TH_FCPX1,  match_opcode, 0 }, \
{"th.fcpx2",  0, INSN_CLASS_XTHEADCF, "Xtu2@30,S,T",             MATCH_TH_FCPX2,  MASK_TH_FCPX2,  match_opcode, 0 }, \
{"th.fcpx3",  0, INSN_CLASS_XTHEADCF, "Xtu2@30,D,S,T",           MATCH_TH_FCPX3,  MASK_TH_FCPX3,  match_opcode, 0 }, \
{"th.fcpx4",  0, INSN_CLASS_XTHEADCF, "Xtu2@30,D,S,T",           MATCH_TH_FCPX4,  MASK_TH_FCPX4,  match_opcode, 0 }, \
{"th.fcpx5",  0, INSN_CLASS_XTHEADCF, "Xtu2@30,D,S,T",           MATCH_TH_FCPX5,  MASK_TH_FCPX5,  match_opcode, 0 }, \
{"th.fcpx6",  0, INSN_CLASS_XTHEADCF, "Xtu2@30,D,T,Xtu5@15",      MATCH_TH_FCPX6,  MASK_TH_FCPX6,  match_opcode, 0 }, \
/* XuanTie VSFU/VSFA extensions.  */ \
{"th.vfexp2.v", 0, INSN_CLASS_XTHEADVSFA, "Vd,VtVm", MATCH_TH_VFEXP2_V, MASK_TH_VFEXP2_V, match_opcode, 0 }, \
{"th.vftanh.v", 0, INSN_CLASS_XTHEADVSFA, "Vd,VtVm", MATCH_TH_VFTANH_V, MASK_TH_VFTANH_V, match_opcode, 0 }, \
{"th.vfsig.v", 0, INSN_CLASS_XTHEADVSFA, "Vd,VtVm", MATCH_TH_VFSIG_V, MASK_TH_VFSIG_V, match_opcode, 0 }, \
{"th.vfrec.v", 0, INSN_CLASS_XTHEADVSFA, "Vd,VtVm", MATCH_TH_VFREC_V, MASK_TH_VFREC_V, match_opcode, 0 }, \
/* XuanTie xtheadvsfb, Vector SFB Extension. */ \
{"th.vfsin.v", 0, INSN_CLASS_XTHEADVSFB, "Vd,VtVm", MATCH_TH_VFSIN_V, MASK_TH_VFSIN_V, match_opcode, 0 }, \
{"th.vfcos.v", 0, INSN_CLASS_XTHEADVSFB, "Vd,VtVm", MATCH_TH_VFCOS_V, MASK_TH_VFCOS_V, match_opcode, 0 }, \
/* XuanTie AIOE.  */ \
{ "th.senq.64b", 0, INSN_CLASS_XTHEADAIOE,  "d,t,(s)",  MATCH_TH_SENQ_64B,     MASK_TH_SENQ_64B,     match_opcode, 0 }, \
{ "th.uenq.64b", 0, INSN_CLASS_XTHEADAIOE,  "d,t,(s)",  MATCH_TH_UENQ_64B,     MASK_TH_UENQ_64B,     match_opcode, 0 }, \
/* XuanTie(THead) cbop.  */ \
{ "th.cbo.cleanp", 0, INSN_CLASS_XTHEADCBOP,  "0(s)",              MATCH_TH_CBO_CLEANP,     MASK_TH_CBO_CLEANP,     match_opcode, 0 }, \
/* XuanTie(THead) Vector Arith Turbo.  */ \
{ "th.vile.vv",      0, INSN_CLASS_XTHEADVARITH,  "Vd,Vt,Vs",               MATCH_TH_VILE_VV,      MASK_TH_VILE_VV,      match_opcode, 0 }, \
{ "th.vilo.vv",      0, INSN_CLASS_XTHEADVARITH,  "Vd,Vt,Vs",               MATCH_TH_VILO_VV,      MASK_TH_VILO_VV,      match_opcode, 0 }, \
{ "th.vcrcfoldr.vv", 0, INSN_CLASS_XTHEADVARITH,  "Vd,Vt,Vs",               MATCH_TH_VCRCFOLDR_VV, MASK_TH_VCRCFOLDR_VV, match_opcode, 0 }, \
{ "th.vcrcfoldn.vv", 0, INSN_CLASS_XTHEADVARITH,  "Vd,Vt,Vs",               MATCH_TH_VCRCFOLDN_VV, MASK_TH_VCRCFOLDN_VV, match_opcode, 0 }, \
{ "th.vgmulxor.vv",  0, INSN_CLASS_XTHEADVARITH,  "Vd,Vt,Vs",                MATCH_TH_VGMULXOR_VV, MASK_TH_VGMULXOR_VV, match_opcode, 0 }, \
/* XuanTie(THead) Vecotr Coder */ \
{ "th.vabd.vv",      0, INSN_CLASS_XTHEADVCODER,  "Vd,Vt,VsVm",             MATCH_TH_VABD_VV,      MASK_TH_VABD_VV,      match_opcode, 0 }, \
{ "th.vabd.vx",      0, INSN_CLASS_XTHEADVCODER,  "Vd,Vt,sVm",              MATCH_TH_VABD_VX,      MASK_TH_VABD_VX,      match_opcode, 0 }, \
{ "th.vabd.vi",      0, INSN_CLASS_XTHEADVCODER,  "Vd,Vt,ViVm",        MATCH_TH_VABD_VI,      MASK_TH_VABD_VI,      match_opcode, 0 }, \
{ "th.vabdu.vv",     0, INSN_CLASS_XTHEADVCODER,  "Vd,Vt,VsVm",             MATCH_TH_VABDU_VV,     MASK_TH_VABDU_VV,     match_opcode, 0 }, \
{ "th.vabdu.vx",     0, INSN_CLASS_XTHEADVCODER,  "Vd,Vt,sVm",              MATCH_TH_VABDU_VX,     MASK_TH_VABDU_VX,     match_opcode, 0 }, \
{ "th.vabdu.vi",     0, INSN_CLASS_XTHEADVCODER,  "Vd,Vt,VjVm",             MATCH_TH_VABDU_VI,     MASK_TH_VABDU_VI,     match_opcode, 0 }, \
{ "th.vaba.vv",      0, INSN_CLASS_XTHEADVCODER,  "Vd,Vt,VsVm",             MATCH_TH_VABA_VV,      MASK_TH_VABA_VV,      match_opcode, 0 }, \
{ "th.vaba.vx",      0, INSN_CLASS_XTHEADVCODER,  "Vd,Vt,sVm",              MATCH_TH_VABA_VX,      MASK_TH_VABA_VX,      match_opcode, 0 }, \
{ "th.vaba.vi",      0, INSN_CLASS_XTHEADVCODER,  "Vd,Vt,ViVm",             MATCH_TH_VABA_VI,      MASK_TH_VABA_VI,      match_opcode, 0 }, \
{ "th.vabau.vv",     0, INSN_CLASS_XTHEADVCODER,  "Vd,Vt,VsVm",             MATCH_TH_VABAU_VV,     MASK_TH_VABAU_VV,     match_opcode, 0 }, \
{ "th.vabau.vx",     0, INSN_CLASS_XTHEADVCODER,  "Vd,Vt,sVm",              MATCH_TH_VABAU_VX,     MASK_TH_VABAU_VX,     match_opcode, 0 }, \
{ "th.vabau.vi",     0, INSN_CLASS_XTHEADVCODER,  "Vd,Vt,VjVm",             MATCH_TH_VABAU_VI,     MASK_TH_VABAU_VI,     match_opcode, 0 }, \
{ "th.vwabd.vv",     0, INSN_CLASS_XTHEADVCODER,  "Vd,Vt,VsVm",             MATCH_TH_VWABD_VV,     MASK_TH_VWABD_VV,     match_opcode, 0 }, \
{ "th.vwabd.vx",     0, INSN_CLASS_XTHEADVCODER,  "Vd,Vt,sVm",              MATCH_TH_VWABD_VX,     MASK_TH_VWABD_VX,     match_opcode, 0 }, \
{ "th.vwaba.vv",     0, INSN_CLASS_XTHEADVCODER,  "Vd,Vt,VsVm",             MATCH_TH_VWABA_VV,     MASK_TH_VWABA_VV,     match_opcode, 0 }, \
{ "th.vwaba.vx",     0, INSN_CLASS_XTHEADVCODER,  "Vd,Vt,sVm",              MATCH_TH_VWABA_VX,     MASK_TH_VWABA_VX,     match_opcode, 0 }, \
{ "th.vwabau.vv",    0, INSN_CLASS_XTHEADVCODER,  "Vd,Vt,VsVm",             MATCH_TH_VWABAU_VV,    MASK_TH_VWABAU_VV,    match_opcode, 0 }, \
{ "th.vwabau.vx",    0, INSN_CLASS_XTHEADVCODER,  "Vd,Vt,sVm",              MATCH_TH_VWABAU_VX,    MASK_TH_VWABAU_VX,    match_opcode, 0 }, \
{ "th.vwabdu.vv",    0, INSN_CLASS_XTHEADVCODER,  "Vd,Vt,VsVm",             MATCH_TH_VWABDU_VV,    MASK_TH_VWABDU_VV,    match_opcode, 0 }, \
{ "th.vwabdu.vx",    0, INSN_CLASS_XTHEADVCODER,  "Vd,Vt,sVm",              MATCH_TH_VWABDU_VX,    MASK_TH_VWABDU_VX,    match_opcode, 0 }, \
{ "th.vfabd.vv",     0, INSN_CLASS_XTHEADVCODER,  "Vd,Vt,VsVm",             MATCH_TH_VFABD_VV,     MASK_TH_VFABD_VV,     match_opcode, 0 }, \
{ "th.vfabd.vf",     0, INSN_CLASS_XTHEADVCODER,  "Vd,Vt,SVm",              MATCH_TH_VFABD_VF,     MASK_TH_VFABD_VF,     match_opcode, 0 }, \

