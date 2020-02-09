# Maintainer: imoutocon
pkgname=uwu
pkgver=0.1
pkgrel=1
pkgdesc="uwu your terminal today!"
arch=('any')
# url=''
license=('GPL')
depends=()
makedepends=('gcc')
checkdepends=()
changelog=
source=("$pkgname-$pkgver.tar.gz")
noextract=()
md5sums=()
validpgpkeys=()

build() {
	cd "$pkgname-$pkgver"
	make
}

package() {
	cd "$pkgname-$pkgver"
	install -Dm644 uwu "/usr/bin/$pkgname"
}
