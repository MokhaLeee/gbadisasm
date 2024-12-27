struct UnkStruct_Func02078808 {
	unsigned short unk_00;
};

struct UnkStruct_0219796C {
	unsigned char _pad_00[0x08 - 0x00];

	int unk_08;
};

int sub_02078F5C(int, int, struct UnkStruct_Func02078808 *);
extern struct UnkStruct_0219796C * unk_0219796C;

int sub_02078808(struct UnkStruct_Func02078808 * r0)
{
	int r2;

	if (sub_02078F5C(0x20, 0x20, r0) == 0)
		return 0;

	r2 = r0->unk_00;

	unk_0219796C->unk_08 = r2 * 8 - 0x400;
	return 1;
}
