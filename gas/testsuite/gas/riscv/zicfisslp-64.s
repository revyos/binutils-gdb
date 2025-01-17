	# Zicfiss
.option push
.option arch, rv64i_zicfiss
	sspush x1
	sspush x5
	sspopchk x1
	sspopchk x5
	ssrdp a0
	ssamoswap.d       a0, a0, 0(a0)
	ssamoswap.d       a0, a0, (a0)
	ssamoswap.d.aq    a0, a0, 0(a0)
	ssamoswap.d.aq    a0, a0, (a0)
	ssamoswap.d.rl    a0, a0, 0(a0)
	ssamoswap.d.rl    a0, a0, (a0)
	ssamoswap.d.aqrl  a0, a0, 0(a0)
	ssamoswap.d.aqrl  a0, a0, (a0)
.option pop

	# Zicfilp
.option push
.option arch, rv64ic_zicfilp
	lpad 0x111
.option pop
