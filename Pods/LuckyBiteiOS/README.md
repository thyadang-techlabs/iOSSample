# 럭키버스 iOS 연동 가이드

## 설치

```ruby
#Podfile
target 'LuckyVerseiOSSampleSwiftUI' do
  use_frameworks!
  pod "LuckyBiteiOS"
  pod "BidmadGoogleAdMobAdapter", "11.10.0.11.0"
end
```

Podfile에 “**LuckyBiteiOS**”와 “**BidmadGoogleAdMobAdapter**”를 추가하세요.

(* ”BidmadGoogleAdMobAdapter”는 버전을 "11.10.0.11.0"로 고정해주세요.)


XCode 프로젝트의 TARGETS에서 원하는 타겟을 선택한 다음, General 탭으로 이동하세요. 

**Frameworks, Libraries, and Embedded Content** 항목에서 “**BidmadSDK.xcframework**”, “**Luckyverse.xcframework**”, “**OpenBiddingHelper.xcramework**”를 추가해주세요.

Build Phases 탭에 “**[CP] Embed Pods Frameworks**”, “**[CP] Copy Pods Resources**” 두 항목이 생겼다면 **삭제** 해주세요.

info.plist 파일에 아래 코드를 추가해 주세요.

```xml
<key>GADApplicationIdentifier</key>
<string>테크랩스로부터 전달받은 애드몹 광고 키</string>
<key>BidmadAppDomain</key>
<string>테크랩스로부터 발급받은 앱 도메인</string>
```

## 초기화

```swift
//Swift Language

import LuckyVerse
...
LuckyVerseSDK.shared.initialize()
LuckyVerseSDK.shared.updateUSER_ID(userId:"사용자_식별자")
LuckyVerseSDK.shared.updateAPP_KEY(APP_KEY: "발급_받은_앱_키")
LuckyVerseSDK.shared.updateIDFA(IDFA: "SAMPLE IDFA")
....
```

```objectivec
//Objective-C

#import "LuckyVerse/LuckyVerse.h"
...
LuckyVerseSDK *sdk = [LuckyVerseSDK shared];
[sdk initialize];
[sdk updateUSER_IDWithUserId:@"사용자_식별자"];
[sdk updateAPP_KEYWithAPP_KEY:@"발급_받은_앱_키"];
[sdk updateIDFAWithIDFA:@"SAMPLE IDFA"];

...
```

LuckyVerse를 import하세요. 그후 LuckyVerseSDK 싱글톤 클래스의 `initialize()` 함수를 실행하세요.

LuckyVerseSDK 싱글톤 클래스의 `updateUSER_ID` 함수를 사용해, 사용자 식별자를 입력하세요. `updateUSER_ID` 함수는 String 타입 변수를 인자로 받습니다. 매체사 앱에서 사용자를 식별할 때 사용하는 아이디를 입력하면 됩니다. (ex. 하나머니 앱 내 고객번호를 암호화 한 값)

LuckyVerseSDK 싱글톤 클래스의 `updateAPP_KEY` 함수를 사용해, 테크랩스로부터 발급받은 앱키를 입력하세요. `updateAPP_KEY` 함수는 String 타입 변수를 인자로 받습니다. 앱 키는 보안과 매체사 식별을 위해 테크랩스에서 발급한 값입니다.

LuckyVerseSDK 싱글톤 클래스의 `updateIDFA` 함수를 사용해, 사용자 디바이스로부터 전달받은 IDFA를 입력하세요. 광고 추적을 위해 사용됩니다.

## 광고 준비

```swift
//Swift Language

import LuckyVerse
...
LuckyVerseSDK.shared.setRewardAdZoneId("보상형_광고_존_아이디")
LuckyVerseSDK.shared.setInterstitialAdZoneId("전면_광고_존_아이디")
...
```

```objectivec
//Objective-C

#import "LuckyVerse/LuckyVerse.h"
...
LuckyVerseSDK *sdk = [LuckyVerseSDK shared];
[sdk setRewardAdZoneId:@"보상형_광고_존_아이디"];
[sdk setInterstitialAdZoneId:@"전면_광고_존_아이디"];
...
```

LuckyVerse를 import하세요. 그후 LuckyVerseSDK 싱글톤 클래스의 `setRewardAdZoneId` 함수와 `setInterstitialAdZoneId` 함수를 실행하세요. 

`setRewardAdZoneId` 함수는 String 타입 변수를 인자로 받습니다. 인자는 보상형 광고 송출을 위한 존 아이디입니다. 테크랩스에 문의해 발급 받으세요. (* 존 아이디를 입력하지 않을 경우, 테스트 광고가 송출됩니다.)

`setInterstitialAdZoneId` 함수는 String 타입 변수를 인자로 받습니다. 인자는 전면 광고 송출을 위한 존 아이디입니다. 테크랩스에 문의해 발급 받으세요. (*존 아이디를 입력하지 않을 경우, 테스트 광고가 송출됩니다.)

## 네이티브 UI 요소를 통한 럭키버스 진입

```swift
//Swift Language

import LuckyVerse
...
//럭키버스 메인 화면으로 진입
LuckyVerseSDK.shared.openLuckyVerseMain()

//럭키버스 "내 정보" 화면으로 진입
LuckyVerseSDK.shared.openLuckyVerseMyPage()

//럭키버스 "사주정보 입력" 화면으로 진입
LuckyVerseSDK.shared.openLuckyVerseSajuInfo()

//...등등

...
```

```objectivec
//Objective-C

#import "LuckyVerse/LuckyVerse.h"
...
LuckyVerseSDK *sdk = [LuckyVerseSDK shared];

//럭키버스 메인 화면으로 진입
[sdk openLuckyVerseMain];

//럭키버스 "내 정보" 화면으로 진입
[sdk openLuckyVerseMyPage];

//럭키버스 "사주정보 입력" 화면으로 진입
[sdk openLuckyVerseSajuInfo];
...
```

클릭/터치 이벤트에 LuckyVerseSDK 싱글톤 클래스의 “`open`”으로 시작하는 함수를 연결하세요. 럭키버스의 원하는 페이지로 이동하게 됩니다.

## 럭키버스에서 매체사 앱의 설정 화면으로 이동하기

```swift
//Swift Language

import LuckyVerse
...
LuckyVerseSDK.shared.setGoToSettingSwift {
	//여기에 설정화면으로 이동할 수 있는 로직을 작성해주세요.
}
...
```

```objectivec
//Objective-C

#import "LuckyVerse/LuckyVerse.h"
...
LuckyVerseSDK *sdk = [LuckyVerseSDK shared];
[sdk setGoToSettingObjc:^{
	//여기에 설정화면으로 이동할 수 있는 로직을 작성해주세요.
}];

```

럭키버스 안에서 특정 요소를 터치했을 때, 앱의 설정화면으로 이동해야 할 경우가 있습니다. 개발 언어에 따라 `setGoToSettingSwift`, `setGoToSettingObjc` 함수에 콜백 함수를 전달해주세요.
