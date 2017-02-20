// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "FPSCharacter.generated.h"

UCLASS()
class FPSPROJECT_API AFPSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPSCharacter();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// ����ǰ���ƶ������롣
	UFUNCTION()
	void MoveForward(float Value);

	// ���������ƶ������롣
	UFUNCTION()
	void MoveRight(float Value);

	// ���°���ʱ������Ծ��ǡ�
	UFUNCTION()
	void StartJump();

	// �ɿ�����ʱ�����Ծ��ǡ�
	UFUNCTION()
	void StopJump();


	// FPS �������
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* FPSCameraComponent;


	// ��һ�˳�ģ�ͣ��ֱۣ�������ӵ����ҿɼ���
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		USkeletalMeshComponent* FPSMesh;
};
