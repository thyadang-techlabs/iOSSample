#!/bin/bash
# xcodeproj gem 설치 확인 및 설치
if ! gem list xcodeproj -i &>/dev/null; then
    echo "xcodeproj gem이 설치되어 있지 않습니다. 설치를 시작합니다..."
    sudo gem install xcodeproj
fi

# Xcode 프로젝트 파일 경로 (예: MyProject.xcodeproj)
PROJECT_PATH="iOSSample.xcodeproj"

# 타겟 이름 설정 (해당 타겟의 Build Phase에서 Copy Pods Resources 제거)
TARGET_NAME="iOSSample"

# 빌드 단계 제거를 위한 Ruby 스크립트 생성
ruby <<RUBY
  require 'xcodeproj'

  # Xcode 프로젝트 열기
  project = Xcodeproj::Project.open('$PROJECT_PATH')

  # 타겟 찾기
  target = project.targets.find { |t| t.name == '$TARGET_NAME' }

  # 타겟에서 "Copy Pods Resources" 빌드 단계 찾기
  phase = target.shell_script_build_phases.find { |p| p.name == '[CP] Copy Pods Resources' }
  phase2 = target.shell_script_build_phases.find { |p| p.name == '[CP] Embed Pods Frameworks' }

  # 빌드 단계가 존재하면 제거
  if phase
    target.build_phases.delete(phase)
    puts "Removed '[CP] Copy Pods Resources' from target '$TARGET_NAME'."
  else
    puts "'[CP] Copy Pods Resources' not found in target '$TARGET_NAME'."
  end

  if phase2
    target.build_phases.delete(phase2)
    puts "Removed '[CP] Embed Pods Frameworks' from target '$TARGET_NAME'."
  else
    puts "'[CP] Embed Pods Frameworks' not found in target '$TARGET_NAME'."
  end

  # 변경사항 저장
  project.save
RUBY
