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
        LuckyVerseSDK.shared.updateUSER_ID(userId: "luckybite.hana.test001")
        LuckyVerseSDK.shared.updateAPP_KEY(APP_KEY: "luckybite.hana.test001")
        LuckyVerseSDK.shared.updateIDFA(IDFA: "IDFA")
        LuckyVerseSDK.shared.setGoToSettingSwift {
            print("SEEEE")
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

