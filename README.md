
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
