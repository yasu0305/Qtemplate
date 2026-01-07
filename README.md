# Qtemplate

Qt C++ アプリケーションのテンプレートプロジェクトです。

## 機能

- 右上に現在時刻を表示（yyyy/MM/dd HH:mm:ss形式）
- 1秒ごとに自動更新
- ウィンドウタイトル: "Template"

## 環境

- Qt 6
- CMake 3.5 以上
- C++11 以上

## ビルド方法

### 初回セットアップ
```bash
cmake -S . -B build
```

### ビルド
```bash
cmake --build build
```

### 実行
```bash
./build/Qtemplate
```

## 開発環境

### Qt Creator
- UI デザインは Qt Creator で `mainwindow.ui` を編集

### VS Code
- コード編集は VS Code で実施
- F5 キーでデバッグ実行可能（.vscode/launch.json 設定済み）
- Ctrl+Shift+B でビルド可能（.vscode/tasks.json 設定済み）

## ファイル構成

- `main.cpp` - アプリケーションエントリポイント
- `mainwindow.h/cpp` - メインウィンドウクラス
- `mainwindow.ui` - Qt Designer UI ファイル
- `CMakeLists.txt` - CMake ビルド設定
- `.vscode/` - VS Code デバッグ・ビルド設定

## ライセンス

このテンプレートは自由に使用・改変できます。
