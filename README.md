# 考研学习档案

持续记录数学二、英语一、408、政治的学习进度、测评、错因和后续计划。建立于 **2026-10-27**，日期统一采用北京时间。

**目标：约两个月冲刺总分 350；每天学习时间不确定，上限不超过 3 小时。** 当前为温习恢复阶段。目标考试日期、院校专业、其余三科基线尚待补充。

## 从这里开始

| 内容 | 入口 |
|---|---|
| 当前水平、时间约束与待确认事项 | [STATUS.md](STATUS.md) |
| 当前数学二起步测评 | [M2-02：定积分批改与待验算 R1](notes/M2-02-review.md) · [M2-01 手写批改](notes/M2-01-review.md) |
| 最近一周可执行安排 | [第一周计划](plans/2026-10-27-week-01.md) |
| 408 薄弱点与讲解顺序 | [408 恢复路线](plans/408-recovery.md) |
| 当前 Cache 微课与待答题 | [第 4 步：直接映射与冲突，CA-04](notes/408-cache-04-direct-mapping.md) · [CA-03 已答对](notes/408-cache-03-lines.md) |
| 当前编程练习与批改 | [LL-02 题目](assessments/2026-10-27-LL-02-reversal.md) · [用户单行订正已验证](notes/408-LL-02-review.md) |
| 前序微课与推演练习 | [01：指针与链表反转](notes/408-01-pointer-reversal.md) |
| 头指针与头结点的区别 | [01 补充：链表头部形式](notes/408-01a-list-heads.md) |
| 约两个月的阶段安排与调整规则 | [阶段计划](plans/roadmap.md) |
| 408 逐题得分和原始诊断 | [诊断记录](assessments/2026-10-27-408-diagnostic.md) |
| 原卷，含尚未验证的大题 | [408 原创诊断卷](assessments/2026-10-26-408-paper.md) |
| 错题、薄弱点与复测要求 | [错题跟踪](progress/error-log.md) |
| 已发生的学习活动 | [学习日志](progress/2026-10-27.md) |
| 反转链表与 Cache 讲解 | [链表](notes/linked-list-reversal.md) · [Cache](notes/cache-basics.md) |
| 可直接在浏览器打开的 Cache 演示 | [交互演示](materials/cache-traversal.html) |
| 对话与照片来源 | [归档说明](archive/README.md) |
| 后续记录模板 | [每日记录](templates/daily.md) · [周复盘](templates/weekly-review.md) |

## 当前基线

408 原创基础诊断卷选择题 **50/80，25 对、10 错、5 道不会，闭卷约 24 分钟**。数据结构 6/22、组成原理 16/22、操作系统 20/20、网络 8/16。该成绩不是完整 408 得分，也不用于按比例预测真题成绩。

最近的具体缺口是链表反转的独立正确实现、Cache 地址与访问分析。数学二 [M2-01 已批改](notes/M2-01-review.md)：首次连续性参数正确、左导数末步有误；反馈后已补正确右导数列式及结果，规范书写与计算稳定性待后续复测，[M2-02 定积分已批改](notes/M2-02-review.md)，换元正确、原函数有误，当前先做求导验算；链表无提示复写和 CA-04 保留待验证。数学二、英语一、政治仍需补基线，暂不预测 350 分可达性。

## 如何持续使用

每次学习后告诉助手“今天学了什么、实际用了多久、哪些题独立做对、哪里卡住”，可附答案或照片。助手按 [AGENTS.md](AGENTS.md) 更新日志、状态和下一步任务。

2026-10-27 起，按用户授权，每次学习交互后及时将新增记录、讲解、练习与反馈提交并推送至本仓库；无需另行提醒。未作答和待验证状态会保留，不将讲解当作掌握证据。

只把已发生的学习写进日志；计划与已完成分开。听懂讲解、原题做对、新题独立做对、隔日复测通过分别记录。每周据实际时间和复测结果调整下一周。

本目录已使用 Git 保存版本，GitHub 公有仓库为 [MIAFOREVER/kaoyan-study-archive](https://github.com/MIAFOREVER/kaoyan-study-archive)，远程名称为 `origin`，主分支为 `main`。每次阶段性更新提交后，用 `git push` 同步备份；本地文件不会自动上传。

日常同步流程：

```sh
git pull --ff-only
# 更新学习记录后，检查并提交本次修改
git status
git add <本次更新的文件>
git commit -m "更新学习记录与复习计划"
git push
```

换电脑时，可运行 `git clone https://github.com/MIAFOREVER/kaoyan-study-archive.git` 获取档案。原聊天 [生成 408 标准试题](codex://threads/01a178e3-1cdb-75b3-81eb-a9ab15c4cbb2) 已归入「考研」项目；此聊天链接需在有访问权限的 Codex 中打开，GitHub 上可直接阅读 [对话存档](archive/2026-10-26_27-408-conversation.md)。
