/*
 * When I wrote this code, only God and I understood what it did.
 * Now, only God knows.
 */

read(int j, int *i, int p);

main() {
    int i = 0;
    int d[2] = {-82,-60};
    int c[1] = {134};
    char *b = "$%&'(*+,-/02347;<=>?ABCDEFGHIJKMOPQRSTUWXYZ[\\]_`abc";
    char *a = "#X<%X<%X<%X?WX?WX=*X<%X<%X>QX?PX<%X<%X<%X<%X<%X<%X<%X<%X<%X<%X<%X>QX?WX=+X<%X<%X?VX?WX=*X<%#X<%X<%X<%X?WX?WX=+X<%X<%X>QX?WX>JX?WX=*X<%X?VX?WX=*X<%X?VX?P$X?WX?WX=+X<%X<%X?WX?WX=+X<%#X<%X<%X<%X?WX?WX=+X<%X<%X>QX?WX<5X?WX?WX?@X?WX?WX?WX?@X?WX=+X>SX?WX=+X<%X<%X?WX?WX=+X<%#X<%X<%X<%X?WX?WX=+X<%X<%X>QX=WX<%X>RX?WX?WX?WX?WX?WX?WX?WX<&X>QX?WX?+X<%X>%X?WX?WX<+X<%#X<%X<%X<%X<6X>WX?PX?OX?OX=WX<&X<%X<,X?WX?WX<;X<%X?WX?WX<+X<%X<,X<SX?WX?OX?VX=WX<.X<%X<%#X?WX?WX?WX?WX?WX?WX=PX?IX>WX?WX?PX?SX>IX?WX=UX?SX>WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?+X<QX?WX?WX?*X<RX?WX?WX>VX?;X?IX?WX?WX?WX?WX?WX?WX?UX?SX?WX?WX?WX?W#X?WX?WX?WX?WX?WX?WX?SX?UX=WX?WX?0X<6X?WX?:X?PX=/X>SX?;X?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?PX?WX?WX?WX?WX?WX?WX=)X<RX?WX?WX=*X<SX?WX?;X?IX=WX?UX=WX?WX?WX?WX?WX?UX=PX?IX?WX?WX?W#X?WX?WX?WX?WX?WX?WX?;X?PX?WX?WX?WX=%X<RX?;X?VX?;X?*X<RX?IX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX=+X><X=5X?WX?WX=)X<-X>WX?WX?UX=PX?WX?SX?WX?WX?WX?WX=9X?PX?IX>WX?W#X?WX?WX?WX?WX?WX?WX?IX>WX?VX>WX?WX=)X>)X<5X>WX?:X=WX?CX=,X>PX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX=+X>QX?CX<5X?WX?PX<,X?BX<6X>WX?UX?PX?SX?UX?WX?WX?WX?WX?/X>WX?IX>W#X?WX?WX?WX?WX?WX?WX?;X?IX?WX>WX?WX=*X>QX=PX=,X>SX=UX?PX=PX=)X<SX?UX?WX?WX=WX?WX?WX?WX?WX?WX?WX?PX?WX?WX?WX?WX?1X>JX?IX>PX<,X?WX=*X>RX>PX=/X<SX=VX>.X?KX?IX?WX?WX?WX?WX=*X>SX=W#X?WX?WX?WX?WX?WX?WX=0X?WX>VX=WX?WX=*X>QX?UX>SX?)X<RX?PX?;X?WX?)X<RX?;X?WX?WX?;X?WX?WX?WX?WX?WX?WX?UX?WX?WX?WX=+X>QX?IX?;X?CX<5X?PX<,X=IX<8X>%X=2X>VX?;X?PX?SX?WX?WX?WX=WX=/X>W#X?WX?WX?WX?WX?WX?WX?CX>QX=WX?;X?WX=+X>QX?IX?;X?HX>CX=,X>WX?:X=WX?BX<5X<1X?RX?WX?UX>WX?WX?WX?WX?WX?IX?WX?WX?WX=+X>QX?WX?WX?VX=*X<RX>%X?<X?VX?;X?PX=,X>WX?:X?IX>WX?WX?WX?WX>PX<5#X?WX?WX?WX?WX?WX?WX?WX=,X?WX>WX?UX=+X<5X<8X<8X<8X<3X<3X<,X<8X<8X<;X<+X>%X>WX?SX?WX?IX>WX?WX?WX?WX?PX>WX?WX?WX<&X?VX?WX?WX?WX?CX=)X<+X?RX?WX?VX?IX?WX=)X<SX?UX?IX>WX?SX?WX?WX=+#X?WX?WX?WX?WX?WX?WX?WX=+X>RX?WX=UX=+X>QX?WX?WX?WX?WX?WX?:X?*X<JX?OX?OX=)X>%X>SX=WX?IX?WX=UX?WX?WX?WX>IX?;X=WX>%X?WX?WX?WX?WX?WX?CX<2X?QX?WX?WX?PX?WX?WX?*X<RX?IX?WX?SX?WX?WX?W#X?WX?WX?WX?WX?WX?WX?WX?WX<5X?IX=WX=+X>QX?WX?WX?WX?WX?WX?WX?WX?CX=,X>WX?LX<5X=)X<SX?WX>VX?UX?;X=WX?WX>IX?WX=+X>QX?WX?WX?WX?WX?WX?WX=%X>VX?WX?WX?WX?WX?WX?WX?*X<RX?VX?PX?SX?WX=W#X?WX?WX?WX?WX?WX?WX?WX?WX=+X>RX?WX<+X>QX?WX?WX?WX?WX?WX?WX?WX?WX?PX?)X<SX=+X>RX?*X<RX?;X?VX?UX?SX?;X?WX?UX<&X?VX?WX?WX?WX?WX?WX?WX?+X?WX?WX<WX<8X<8X<-X<6X<.X>%X<&X>5X?IX?WX?W#X?WX?WX?WX?WX?WX?WX?WX?WX?WX=,X?WX=(X>TX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?BX=6X</X?WX?*X<5X?WX?:X=WX?:X=WX=:X><X?WX?WX?WX?WX?WX=WX<8X<-X<&X>%X?%X?<X?@X?@X?OX?OX?OX=*X>SX?UX?:X=W#X?WX?WX?WX?WX?WX?WX?WX?WX=WX<(X<5X<&X<-X<-X<-X<-X<-X<-X<-X<-X<-X<6X<8X<8X>WX?)X>SX?WX?CX<5X>IX?;X=WX?UX<&X?VX?WX?WX?WX?WX?WX=(X>%X>%X<5X<8X<WX>WX?SX?;X?IX?UX?SX?NX=%X>WX?IX?;#X?WX?WX?WX?;X?WX?WX?WX?WX?OX?OX=*X>%X?WX?VX?WX?VX?PX?WX?OX<WX<7X<-X>%X>%X?@X?WX?PX?WX?WX?PX=,X>WX?SX>(X?TX?WX?WX?WX?WX?SX?WX?WX?WX=OX?BX?@X?)X?%X=%X<-X<8X<8X<PX?IX?LX<,X?VX=U#X?WX>WX?WX?WX?SX?WX?WX?WX?WX?WX=WX<2X?WX?WX?WX?WX<WX<.X<&X>%X>%X?@X?VX?WX?WX?WX?WX?WX?WX?WX?WX?/X?AX?VX=WX?WX?WX?PX?WX?WX>WX?PX?WX?WX?;X?VX?UX?LX>IX?;X?OX?BX?@X=VX?;X?BX<5X?W#X?WX?SX?WX?WX=PX?WX?WX?WX?WX?WX=4X?BX<QX=WX<.X<&X>%X>%X?<X?MX>WX?WX?UX?SX>UX?VX?;X?PX?WX?;X?WX?WX?WX?LX<WX?NX?CX?TX?WX?WX?WX?WX?WX?VX?WX?WX?WX?WX?WX?UX?LX?IX?WX?WX?WX?UX>%X>P#X?WX>PX?SX?WX?WX?PX?SX?WX?WX?WX=PX<8X?&X>%X?%X?@X?OX?WX?8X=WX?WX?HX?UX=SX?WX?HX?UX?SX>IX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?IX>%X>Q#X<QX?;X?IX?WX?WX?PX>WX?UX?WX?WX?PX?WX?PX?*X<RX?WX?OX?IX<WX?WX?OX?;X?SX>WX?PX?UX?SX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX>%X?I#X?+X<RX?;X?VX?SX?WX?WX>VX=UX?WX?WX?WX?WX?WX?*X>RX?OX?WX?SX?PX?IX?;X?WX?WX?UX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX=WX>%X=W#X?WX?*X<RX?PX=SX?UX?WX?IX>WX?UX?SX?WX?WX?WX?WX?*X>SX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX<8X>SX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX<+X>QX?W#X=6X<VX?*X<RX?WX?BX<8X?WX>IX?PX>WX=UX?WX?WX?WX?WX?*X<SX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX<(X<0X>QX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX<1X>%X?WX?V#X?WX?PX=/X>BX<6X?WX?WX?/X<SX?UX>IX?WX?UX?SX?WX?WX?WX?CX<DX>SX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX=1X>JX>?X<5X?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX=WX<(X>%X>%X>WX?:#X?WX?UX?*X<RX?CX<5X?WX?WX=PX?/X<6X>PX?IX=PX?;X?WX?WX?WX?PX=%X=RX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?PX?,X<(X?QX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX<;X>%X?MX=CX>%X<QX?W#X>SX?UX?WX=)X>SX?PX=,X>WX?WX?WX>CX>%X<6X>WX?SX=VX?UX?SX?WX?WX?)X</X>WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX<8X>&X?JX?VX?;X=WX>%X=)X>W#X=)X>WX?WX?PX>%X<RX?;X?*X<SX?WX?WX?*X>%X?%X<-X<SX?WX=UX?IX?WX?WX?PX?,X>SX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX=WX<.X>%X?<X<5X?IX?PX?WX=;X>%X>*X<Q#X?PX=,X>WX?WX?+X>KX=5X>WX?PX?FX?6X<WX?CX<5X?*X>%X<,X<SX?PX?;X?VX>WX?WX?*X<RX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX?WX=WX<.X?<X=:X>=X?WX>%X?WX?WX?WX<+X=)X>QX=)#X?WX?PX=,X>WX?WX=*X>?X=%X<6X>VX?;X?WX?WX?PX=,X<'X<5X?BX=,X<WX?IX?WX>VX?WX?*X<6X<SX<WX<WX<WX<WX=WX?WX?WX?WX?WX?WX?WX?WX?WX?WX<WX<8X>.X?<X?VX=;X><X?WX?WX>%X?WX?WX=;X><X?WX>,X?C#X?WX?WX?WX?)X<SX?WX=)X>LX=)X>*X=6X<VX?UX?WX?WX?*X=%X>RX=PX?)X<6X>WX?WX=VX?WX?*X>%X=%X>%X>%X>%X>%X>%X>%X>%X>%X>%X>%X>%X>%X?%X?<X?MX=WX?IX<1X?<X?WX?WX=1X>QX?WX=WX>&X?WX?WX>%X?W#X?WX?WX?WX?WX?BX=6X?WX?*X>SX=/X>WX?OX>@X?-X?6X?WX?PX=%X<6X<UX<PX<)X<RX?WX?;X?WX?*X>6X?.X?@X?@X?@X?)X?%X>%X>%X>%X>%X?VX?WX?;X=PX?IX=WX>(X?TX?WX?WX?WX<+X?TX=;X?=X?WX?WX?WX>%X=W#X?WX?WX?WX?WX?WX?PX?HX?WX?WX?WX=/X<&X>@X?@X?@X?@X?FX?GX?MX?OX?OX?OX?*X<,X>SX?WX?WX?*X>SX?WX?WX?WX?WX?WX?WX?PX?OX?@X?/X?-X=5X<8X<SX<OX?WX?WX?WX?WX=;X?JX?EX?MX?WX?WX?WX?WX<)X?P#";

    for (;i[++a];) {
        read('-'-'-',i[a] + 56 > '\\' ? (i[a] - ',' * 2 ? *(i + a) - '\\' + b + '7' : c) : i[a] - '\\' + d + '9','/'/'/');
    }
}

read(int j, int *i, int p) {
    int k = '\\' + *i;
    write(j/p+p, &k, p/p);
}
