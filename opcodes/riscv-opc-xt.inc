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
/* Xuantie VSFU/VSFA extensions.  */ \
{"th.vfexp2.v", 0, INSN_CLASS_XTHEADVSFA, "Vd,VtVm", MATCH_TH_VFEXP2_V, MASK_TH_VFEXP2_V, match_opcode, 0 }, \
{"th.vftanh.v", 0, INSN_CLASS_XTHEADVSFA, "Vd,VtVm", MATCH_TH_VFTANH_V, MASK_TH_VFTANH_V, match_opcode, 0 }, \
{"th.vfsig.v", 0, INSN_CLASS_XTHEADVSFA, "Vd,VtVm", MATCH_TH_VFSIG_V, MASK_TH_VFSIG_V, match_opcode, 0 }, \
{"th.vfrec.v", 0, INSN_CLASS_XTHEADVSFA, "Vd,VtVm", MATCH_TH_VFREC_V, MASK_TH_VFREC_V, match_opcode, 0 }, \
/* xtheadvsfb, Vector SFB Extension. */ \
{"th.vfsin.v", 0, INSN_CLASS_XTHEADVSFB, "Vd,VtVm", MATCH_TH_VFSIN_V, MASK_TH_VFSIN_V, match_opcode, 0 }, \
{"th.vfcos.v", 0, INSN_CLASS_XTHEADVSFB, "Vd,VtVm", MATCH_TH_VFCOS_V, MASK_TH_VFCOS_V, match_opcode, 0 }, \
/* Xuantie AIOE.  */ \
{ "th.senq.64b", 0, INSN_CLASS_XTHEADAIOE,  "d,t,(s)",  MATCH_TH_SENQ_64B,     MASK_TH_SENQ_64B,     match_opcode, 0 }, \
{ "th.uenq.64b", 0, INSN_CLASS_XTHEADAIOE,  "d,t,(s)",  MATCH_TH_UENQ_64B,     MASK_TH_UENQ_64B,     match_opcode, 0 }, \

