// these overlap c.fsdsp
DECLARE_OVERLAP_INSN(cm_push, EXT_ZCMP)
DECLARE_OVERLAP_INSN(cm_pop, EXT_ZCMP)
DECLARE_OVERLAP_INSN(cm_popret, EXT_ZCMP)
DECLARE_OVERLAP_INSN(cm_popretz, EXT_ZCMP)
DECLARE_OVERLAP_INSN(cm_mva01s, EXT_ZCMP)
DECLARE_OVERLAP_INSN(cm_mvsa01, EXT_ZCMP)
DECLARE_OVERLAP_INSN(cm_jalt, EXT_ZCMT)

// c.ebreak and c.jalr overlap c.add
DECLARE_OVERLAP_INSN(c_ebreak, EXT_ZCA)
DECLARE_OVERLAP_INSN(c_jalr, EXT_ZCA)

// c.jr overlaps c.mv
DECLARE_OVERLAP_INSN(c_jr, EXT_ZCA)

// lpad overlaps auipc
DECLARE_OVERLAP_INSN(lpad, EXT_ZICFILP)

// these overlap Zimop/Zcmop
DECLARE_OVERLAP_INSN(ssrdp, EXT_ZICFISS)
DECLARE_OVERLAP_INSN(sspush_x1, EXT_ZICFISS)
DECLARE_OVERLAP_INSN(sspush_x5, EXT_ZICFISS)
DECLARE_OVERLAP_INSN(sspopchk_x1, EXT_ZICFISS)
DECLARE_OVERLAP_INSN(sspopchk_x5, EXT_ZICFISS)
DECLARE_OVERLAP_INSN(c_sspush_x1, EXT_ZICFISS)
DECLARE_OVERLAP_INSN(c_sspopchk_x5, EXT_ZICFISS)
DECLARE_OVERLAP_INSN(c_mop_N, EXT_ZCMOP)
