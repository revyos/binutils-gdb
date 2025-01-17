	# Zicfiss
.option push
.option arch, rv32i_zicfiss
	sspush x1
	sspush x5
	sspopchk x1
	sspopchk x5
	ssrdp a0
	ssamoswap.w     a0,a0,(a0)
	ssamoswap.w     a0,a0,0(a0)
	ssamoswap.w.aq  a0,a0,(a0)
	ssamoswap.w.aq  a0,a0,0(a0)
	ssamoswap.w.rl  a0,a0,(a0)
	ssamoswap.w.rl  a0,a0,0(a0)
	ssamoswap.w.aqrl	a0,a0,(a0)
	ssamoswap.w.aqrl	a0,a0,0(a0)
.option pop

	# Zicfilp
.option push
.option arch, rv32ic_zicfilp
	lpad 0x111
.option pop
