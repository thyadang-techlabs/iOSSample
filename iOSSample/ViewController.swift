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
        LuckyVerseSDK.shared.initialize()
        LuckyVerseSDK.shared.updateUSER_ID(userId: "hana.test.user")
        LuckyVerseSDK.shared.updateAPP_KEY(APP_KEY: "hana.kG7nP4vL9x.2025:lnTnv06")
        LuckyVerseSDK.shared.updateIDFA(IDFA: "luckybite.hana.test001")
        
        LuckyVerseSDK.shared.setRewardAdZoneIdForSaju("4222fc1a-5cf7-4fa8-b917-8fc1808f829c")
        LuckyVerseSDK.shared.setRewardAdZoneIdForNotSaju("e4577bc9-084d-4433-8fe1-e78461e94ac3")
        LuckyVerseSDK.shared.setRewardAdZoneIdForFortuneCookie("33413746-d6f6-4757-bd94-192f3955e7c5")
        
        
        LuckyVerseSDK.shared.setBannerAdZoneIdForSaju("479bcc6b-55b6-4335-9749-855b9ac11dd1")
        LuckyVerseSDK.shared.setBannerAdZoneIdForNotSaju("3d9c9761-703d-479f-92f1-70fdead24a62")
        LuckyVerseSDK.shared.setBannerAdZoneIdForFortuneCookie("16d231d9-b2f8-4e92-b10a-3cd521669a14")
    
        
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

