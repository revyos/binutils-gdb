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
/* XuanTie(THead) Vector Crypto Turbo.  */ \
{ "th.vmacc54l.vv",  0, INSN_CLASS_XTHEADVCRYPTO, "Vd,Vt,VsVm",             MATCH_TH_VMACC54L_VV,  MASK_TH_VMACC54L_VV,  match_opcode, 0 }, \
{ "th.vmacc54l.vs",  0, INSN_CLASS_XTHEADVCRYPTO, "Vd,Vt,VsVm",             MATCH_TH_VMACC54L_VS,  MASK_TH_VMACC54L_VS,  match_opcode, 0 }, \
{ "th.vmacc54h.vv",  0, INSN_CLASS_XTHEADVCRYPTO, "Vd,Vt,VsVm",             MATCH_TH_VMACC54H_VV,  MASK_TH_VMACC54H_VV,  match_opcode, 0 }, \
{ "th.vmacc54h.vs",  0, INSN_CLASS_XTHEADVCRYPTO, "Vd,Vt,VsVm",             MATCH_TH_VMACC54H_VS,  MASK_TH_VMACC54H_VS,  match_opcode, 0 }, \
/* XuanTie(THead) Vector DOT Turbo.  */ \
{ "th.vmaqa.vv",    0, INSN_CLASS_XTHEADVDOT, "Vd,Vs,VtVm", MATCH_TH_VMAQA_VV,    MASK_TH_VMAQA_VV,    match_opcode, 0}, \
{ "th.vmaqau.vv",   0, INSN_CLASS_XTHEADVDOT, "Vd,Vs,VtVm", MATCH_TH_VMAQAU_VV,   MASK_TH_VMAQAU_VV,   match_opcode, 0}, \
{ "th.vmaqasu.vv",  0, INSN_CLASS_XTHEADVDOT, "Vd,Vs,VtVm", MATCH_TH_VMAQASU_VV,  MASK_TH_VMAQASU_VV,  match_opcode, 0}, \
{ "th.vmaqa.vx",    0, INSN_CLASS_XTHEADVDOT, "Vd,s,VtVm",  MATCH_TH_VMAQA_VX,    MASK_TH_VMAQA_VX,    match_opcode, 0}, \
{ "th.vmaqau.vx",   0, INSN_CLASS_XTHEADVDOT, "Vd,s,VtVm",  MATCH_TH_VMAQAU_VX,   MASK_TH_VMAQAU_VX,   match_opcode, 0}, \
{ "th.vmaqasu.vx",  0, INSN_CLASS_XTHEADVDOT, "Vd,s,VtVm",  MATCH_TH_VMAQASU_VX,  MASK_TH_VMAQASU_VX,  match_opcode, 0}, \
{ "th.vmaqaus.vx",  0, INSN_CLASS_XTHEADVDOT, "Vd,s,VtVm",  MATCH_TH_VMAQAUS_VX,  MASK_TH_VMAQAUS_VX,  match_opcode, 0}, \
{ "th.vpmaqa.vv",   0, INSN_CLASS_XTHEADVDOT, "Vd,Vs,VtVm", MATCH_TH_VPMAQA_VV,   MASK_TH_VPMAQA_VV,   match_opcode, 0}, \
{ "th.vpmaqau.vv",  0, INSN_CLASS_XTHEADVDOT, "Vd,Vs,VtVm", MATCH_TH_VPMAQAU_VV,  MASK_TH_VPMAQAU_VV,  match_opcode, 0}, \
{ "th.vpmaqasu.vv", 0, INSN_CLASS_XTHEADVDOT, "Vd,Vs,VtVm", MATCH_TH_VPMAQASU_VV, MASK_TH_VPMAQASU_VV, match_opcode, 0}, \
{ "th.vpmaqa.vx",   0, INSN_CLASS_XTHEADVDOT, "Vd,s,VtVm",  MATCH_TH_VPMAQA_VX,   MASK_TH_VPMAQA_VX,   match_opcode, 0}, \
{ "th.vpmaqau.vx",  0, INSN_CLASS_XTHEADVDOT, "Vd,s,VtVm",  MATCH_TH_VPMAQAU_VX,  MASK_TH_VPMAQAU_VX,  match_opcode, 0}, \
{ "th.vpmaqasu.vx", 0, INSN_CLASS_XTHEADVDOT, "Vd,s,VtVm",  MATCH_TH_VPMAQASU_VX, MASK_TH_VPMAQASU_VX, match_opcode, 0}, \
{ "th.vpmaqaus.vx", 0, INSN_CLASS_XTHEADVDOT, "Vd,s,VtVm",  MATCH_TH_VPMAQAUS_VX, MASK_TH_VPMAQAUS_VX, match_opcode, 0}, \
{ "th.vpnclip.wv",  0, INSN_CLASS_XTHEADVDOT, "Vd,Vt,VsVm", MATCH_TH_VPNCLIP_WV,  MASK_TH_VPNCLIP_WV,  match_opcode, 0}, \
{ "th.vpnclipu.wv", 0, INSN_CLASS_XTHEADVDOT, "Vd,Vt,VsVm", MATCH_TH_VPNCLIPU_WV, MASK_TH_VPNCLIPU_WV, match_opcode, 0}, \
{ "th.vpnclip.wx",  0, INSN_CLASS_XTHEADVDOT, "Vd,Vt,sVm",  MATCH_TH_VPNCLIP_WX,  MASK_TH_VPNCLIP_WX,  match_opcode, 0}, \
{ "th.vpnclipu.wx", 0, INSN_CLASS_XTHEADVDOT, "Vd,Vt,sVm",  MATCH_TH_VPNCLIPU_WX, MASK_TH_VPNCLIPU_WX, match_opcode, 0}, \
{ "th.vpwadd.vv",   0, INSN_CLASS_XTHEADVDOT, "Vd,Vt,VsVm", MATCH_TH_VPWADD_VV,   MASK_TH_VPWADD_VV,   match_opcode, 0}, \
{ "th.vpwaddu.vv",  0, INSN_CLASS_XTHEADVDOT, "Vd,Vt,VsVm", MATCH_TH_VPWADDU_VV,  MASK_TH_VPWADDU_VV,  match_opcode, 0}, \
{ "th.vpwadd.vx",   0, INSN_CLASS_XTHEADVDOT, "Vd,Vt,sVm",  MATCH_TH_VPWADD_VX,   MASK_TH_VPWADD_VX,   match_opcode, 0}, \
{ "th.vpwaddu.vx",  0, INSN_CLASS_XTHEADVDOT, "Vd,Vt,sVm",  MATCH_TH_VPWADDU_VX,  MASK_TH_VPWADDU_VX,  match_opcode, 0}, \
/* XuanTie(THead), Xuantie Vector OCP FP8 Convert.  */ \
{ "th.vfwcvtbf16.f.f.v",     0, INSN_CLASS_XTHEADVFOFP8MIN, "Vd,VtVm",     MATCH_TH_VFWCVTBF16_F_F_V,  MASK_TH_VFWCVTBF16_F_F_V,  match_opcode, 0 }, \
{ "th.vfncvtbf16.f.f.w",     0, INSN_CLASS_XTHEADVFOFP8MIN, "Vd,VtVm",     MATCH_TH_VFNCVTBF16_F_F_W,  MASK_TH_VFNCVTBF16_F_F_W,  match_opcode, 0 }, \
{ "th.vfncvtbf16.sat.f.f.w", 0, INSN_CLASS_XTHEADVFOFP8MIN, "Vd,VtVm",     MATCH_TH_VFNCVTBF16_SAT_F_F_W,  MASK_TH_VFNCVTBF16_SAT_F_F_W,  match_opcode, 0 }, \
{ "th.vfncvt.f.f.q",         0, INSN_CLASS_XTHEADVFOFP8MIN, "Vd,VtVm",     MATCH_TH_VFNCVT_F_F_Q,  MASK_TH_VFNCVT_F_F_Q,  match_opcode, 0 }, \
{ "th.vfncvt.sat.f.f.q",     0, INSN_CLASS_XTHEADVFOFP8MIN, "Vd,VtVm",     MATCH_TH_VFNCVT_SAT_F_F_Q,  MASK_TH_VFNCVT_SAT_F_F_Q,  match_opcode, 0 }, \
/* XuanTie(THead), xtheadvfoe8m0min, Xuantie Vector OCP E8M0 Convert Extension */ \
{"th.vfwcvt.f.e8m0.v", 0, INSN_CLASS_XTHEADVFOE8M0MIN, "Vd,VtVm", MATCH_TH_VFWCVT_F_E8M0_V, MASK_TH_VFWCVT_F_E8M0_V, match_opcode, 0}, \
{"th.vfncvt.e8m0.f.w", 0, INSN_CLASS_XTHEADVFOE8M0MIN, "Vd,VtVm", MATCH_TH_VFNCVT_E8M0_F_W, MASK_TH_VFNCVT_E8M0_F_W, match_opcode, 0}, \
{"th.vfncvt.e8m0.f.q", 0, INSN_CLASS_XTHEADVFOE8M0MIN, "Vd,VtVm", MATCH_TH_VFNCVT_E8M0_F_Q, MASK_TH_VFNCVT_E8M0_F_Q, match_opcode, 0}, \
/* XuanTie(THead), xtheadvfofp4min, Xuantie Vector OCP FP4 Convert Extension.  */ \
{"th.vfncvt.f.f.w.vf2", 0, INSN_CLASS_XTHEADVFOFP4MIN, "Vd,VtVm",          MATCH_TH_VFNCVT_F_F_W_VF2, MASK_TH_VFNCVT_F_F_W_VF2, match_opcode, 0}, \
{"th.vfwcvt.f.f.v.vf2", 0, INSN_CLASS_XTHEADVFOFP4MIN, "Vd,VtVm",          MATCH_TH_VFWCVT_F_F_V_VF2, MASK_TH_VFWCVT_F_F_V_VF2, match_opcode, 0}, \
/* XuanTie(THead), xtheadvfofp6min, Xuantie Vector OCP FP6 Convert Extension.  */ \
{"th.vfwcvt.f.f6.v",   0, INSN_CLASS_XTHEADVFOFP6MIN, "Vd,VtVm",          MATCH_TH_VFWCVT_F_F6_V, MASK_TH_VFWCVT_F_F6_V, match_opcode, 0}, \
{"th.vfncvt.f6.f.v",   0, INSN_CLASS_XTHEADVFOFP6MIN, "Vd,VtVm",          MATCH_TH_VFNCVT_F6_F_V, MASK_TH_VFNCVT_F6_F_V, match_opcode, 0}, \
/* XuanTie(THead), CRC32 extensions.  */ \
{"th.crc32c.w", 0, INSN_CLASS_XTHEADCRC, "d,s,t", MATCH_TH_CRC32C_W, MASK_TH_CRC32C_W, match_opcode, 0}, \
{"th.crc32c.d", 0, INSN_CLASS_XTHEADCRC, "d,s,t", MATCH_TH_CRC32C_D, MASK_TH_CRC32C_D, match_opcode, 0}, \

