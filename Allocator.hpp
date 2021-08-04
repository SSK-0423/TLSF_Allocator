#pragma once
/*
	カスタムメモリアロケータ
	種類
	・メモリを借りた人が返す←とりあえずこれを実装
	・メモリを貸した側が返却管理←ガベージコレクション(実装したい)
	new deleteをオーバーライドして作成

	必要な機能、情報
	・メモリ貸し出し
	・メモリ返却
	・フリーメモリリンクリスト
	・フリーメモリのマージ
	・

	実装手順
	・Boundary Tagアルゴリズム実装
	・メモリアロケータ
*/

//////////////////
// Boundary Tag //
//////////////////

class BoundaryTag {
private:

public:

};
// メモリブロック
class MemoryBlock {
private:
	unsigned int size;
public:
	MemoryBlock(unsigned int size);
	~MemoryBlock();
};

class Allocator {

};
