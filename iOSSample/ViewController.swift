//
//  ViewController.swift
//  iOSSample
//
//  Created by 전해동 on 4/29/25.
//

import UIKit
import LuckyVerse

class ViewController: UIViewController {
    
    private lazy var luckyButton: UIButton = {
        let button = UIButton(type: .system)
        button.setTitle("럭키버스 실행", for: .normal)
        button.titleLabel?.font = .systemFont(ofSize: 18, weight: .bold)
        button.backgroundColor = .systemBlue
        button.setTitleColor(.white, for: .normal)
        button.layer.cornerRadius = 8
        button.addTarget(self, action: #selector(luckyButtonTapped), for: .touchUpInside)
        return button
    }()

    override func viewDidLoad() {
        super.viewDidLoad()
        LuckyVerseSDK.shared.updateUSER_ID(userId: "매체사 앱에서 사용하는 사용자 식별자")
        LuckyVerseSDK.shared.updateAPP_KEY(APP_KEY: "테크랩스로부터 전달 받은 앱 키")
        LuckyVerseSDK.shared.updateIDFA(IDFA: "쿠팡 추적 광고에 사용할 IDFA")
        LuckyVerseSDK.shared.setRewardAdZoneIdForSaju("사주가 필요한 컨텐츠를 볼 때 쓸 리워드 광고 존 아이디")
        LuckyVerseSDK.shared.setRewardAdZoneIdForNotSaju("사주가 필요 없는 컨텐츠를 볼 때 쓸 리워드 광고 존 아이디")
        LuckyVerseSDK.shared.setRewardAdZoneIdForFortuneCookie("포춘쿠키 컨텐츠를 볼 때 쓸 리워드 광고 존 아이디")

        LuckyVerseSDK.shared.setGoToSettingSwift {
            print("이곳에 설정으로 이동하는 코드를 작성하세요.")
        }
        
        setupUI()
    }
    
    private func setupUI() {
        view.addSubview(luckyButton)
        luckyButton.translatesAutoresizingMaskIntoConstraints = false
        
        NSLayoutConstraint.activate([
            luckyButton.centerXAnchor.constraint(equalTo: view.centerXAnchor),
            luckyButton.centerYAnchor.constraint(equalTo: view.centerYAnchor),
            luckyButton.widthAnchor.constraint(equalToConstant: 200),
            luckyButton.heightAnchor.constraint(equalToConstant: 50)
        ])
    }
    
    @objc private func luckyButtonTapped() {
        // 버튼 탭 액션 구현
        LuckyVerseSDK.shared.openLuckyVerseMain()
    }
}

