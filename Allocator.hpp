#pragma once
/*
	�J�X�^���������A���P�[�^
	���
	�E���������؂肽�l���Ԃ����Ƃ肠�������������
	�E��������݂��������ԋp�Ǘ����K�x�[�W�R���N�V����(����������)
	new delete���I�[�o�[���C�h���č쐬

	�K�v�ȋ@�\�A���
	�E�������݂��o��
	�E�������ԋp
	�E�t���[�����������N���X�g
	�E�t���[�������̃}�[�W
	�E

	�����菇
	�EBoundary Tag�A���S���Y������
	�E�������A���P�[�^
*/

//////////////////
// Boundary Tag //
//////////////////

class BoundaryTag {
private:

public:

};
// �������u���b�N
class MemoryBlock {
private:
	unsigned int size;
public:
	MemoryBlock(unsigned int size);
	~MemoryBlock();
};

class Allocator {

};
